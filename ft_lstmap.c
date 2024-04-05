/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 22:53:47 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/05 23:14:59 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;

    if (!lst || !*f || !del)
        return (NULL);

    new_list = NULL;
    new_list = (t_list *)malloc(sizeof(t_list));
    while (lst)
    {
        f(lst->content);
        del(lst->content);
    }
}