/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:31:19 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/23 15:11:40 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    (*new).content = content;
    (*new).next = NULL;
    return (new);
}
/*
int main()
{
    char    *ptr;
    t_list  *new_list;

    ptr = "hello world";
    new_list = ft_lstnew(ptr);
    if (new_list != NULL)
        printf("content of list:\n%s", (char *)new_list->content);
    else
        printf("error al crear lista");
    return (0);
}*/
