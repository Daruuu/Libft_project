/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:31:19 by dasalaza          #+#    #+#             */
/*   Updated: 2024/03/29 22:40:58 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list *) malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;

    return (new);
}

int main()
{
    char    ptr[20] = "hello world";
    t_list  *new_listReturn;

    new_listReturn = ft_lstnew(ptr);
    if (new_list != NULL)
        printf("content of list:\n%s", (char *)new_listR->content);
    else
        printf("error al crear lista");
    free(new_list);

    return (0);
}
