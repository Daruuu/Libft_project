/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:13:52 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/11 13:40:40 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = *lst;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new;
	}
}
/*
int	main()
{
	t_list	*lista;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
    t_list	*node4;
    t_list	*node5;

	lista = NULL;

	node1 = (t_list *) malloc(sizeof(t_list));
	node1->content = "First";
	node1->next = NULL;
	lista = node1;

	node2 = (t_list *) malloc(sizeof(t_list));
	node2->content = "second";
	node2->next = NULL;
	node1->next = node2;

	node3 = (t_list *) malloc(sizeof(t_list));
	node3->content = "third";
	node3->next = NULL;
	node2->next = node3;

    node4 = (t_list *) malloc(sizeof(t_list));
    node4->content = "fourth";
    node4->next = NULL;
    node3->next = node4;

	node5 = (t_list *) malloc(sizeof(t_list));
	node5->content = "five";
	node5->next = NULL;
	node4->next = node5;
	
	// testing here
	int	size = ft_lstsize(lista);
	printf("length of lista is: %d\n", size);

	t_list	*node = NULL;
	node = (t_list *) malloc(sizeof(t_list));
	node->content = "hello world";
	node->next = NULL;

	printf("lst_add_back\n");
	ft_lstadd_back(&lista, node);

	size = 0;
	size = ft_lstsize(lista);
	printf("length of lista after test is: %d\n", size);

	return (0);
}
*/
