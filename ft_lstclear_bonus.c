/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:50:29 by dasalaza          #+#    #+#             */
/*   Updated: 2024/09/27 21:25:54 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
void	del(void *content)
{
	free(content);
}


void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*tmp;

	current = head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

int	main()
{
	// crear nodos
	t_list *lista = ft_lstnew(ft_strdup("100"));
	t_list *node1 = ft_lstnew(ft_strdup("10"));
	t_list *node2 = ft_lstnew(ft_strdup("25"));
	t_list *node3 = ft_lstnew(ft_strdup("40"));
	t_list *node4 = ft_lstnew(ft_strdup("75"));

   	 //creamos lista
	lista->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	t_list *tmp = lista;
	int i = 0;
	while (tmp != NULL)
	{
		printf("lista antes de clear[%d]: %s\n", i,(char *) tmp->content);
		tmp = tmp->next;
		i++;
	}
	//printf("head antes de clear: %s\n", lista->content);
	//eliminar  nodo....
	ft_lstclear(&node3, del);

	t_list	*tmp2 = lista;
	i = 0;
    while (tmp2->next != NULL)
	{
		printf("lista after clear[%d]: %s\n", i, (char *)tmp2->content);
		tmp2 = tmp2->next;
		i++;
    }
	//ft_free(&lista);
    return (0);
}*/
