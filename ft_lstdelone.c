/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:11:48 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/19 21:39:06 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    del(void *content)
{
    free(content);
}

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst && !del)
    {
        del(lst->content);
        free(lst);
    }
}

int main()
{
    t_list  *lista = NULL;
    t_list  *node01 = (t_list *) malloc(sizeof(t_list));
    t_list  *node02 = (t_list *) malloc(sizeof(t_list));
    t_list  *node03 = (t_list *) malloc(sizeof(t_list));
    t_list  *node04 = (t_list *) malloc(sizeof(t_list));
    t_list  *node05 = (t_list *) malloc(sizeof(t_list));

    node01->content = "node01";
    node01->next = NULL;
    node02->content = "node02";
    node02->next = NULL;
    node03->content = "node03";
    node03->next = NULL;
    node04->content = "node03";
    node04->next = NULL;
    node05->content = "nuevo contenido";
    node05->next = NULL;

    lista = node01;

    node01->next = node01;

    node02->next = node03;

    node03->next = node04;

    node04->next = node05;

    printf("size of lista: %d \n", ft_lstsize(lista));

    printf("execute ft_lstdelone\n");
    ft_lstdelone(node02, del);

    printf("size of lista: %d \n", ft_lstsize(lista));

    return (0);
}
