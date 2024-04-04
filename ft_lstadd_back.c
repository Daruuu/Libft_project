/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:27:06 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/04 12:10:19 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *current;

    if (*lst == NULL)
        *lst = new;
    else
    {
        current = *lst;
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }
}

/*
int main()
{


    return (0);
}
 */
