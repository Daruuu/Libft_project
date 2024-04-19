/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:13:52 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/19 21:19:01 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = NULL;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new;
	new->next = NULL;
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last_node;

    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    last_node = ft_lstlast(*lst);
    last_node->next = new;
    new->next = NULL;
}

/*
void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
int	main()
{
	t_list	*lista;

	t_list	*node1 = (t_list *) malloc(sizeof(t_list));
	t_list	*node2 = (t_list *) malloc(sizeof(t_list));
	t_list	*node3 = (t_list *) malloc(sizeof(t_list));
    t_list	*node4 = (t_list *) malloc(sizeof(t_list));
    t_list	*node5 = (t_list *) malloc(sizeof(t_list));

	lista = NULL;

	node1->content = "First";
	node1->next = NULL;
	node2->content = "second";
	node2->next = NULL;
	node3->content = "third";
	node3->next = NULL;
    node4->content = "fourth";
    node4->next = NULL;
	node5->content = "five";
	node5->next = NULL;

	lista = node1;

	node1->next = node2;
	node2->next = node3;
    node3->next = node4;
    node4->next = node5;

	// testing here
	int	size = ft_lstsize(lista);
	printf("length of lista is: %d\n", size);

	t_list	*add_final = (t_list *) malloc(sizeof(t_list));
	add_final->content = "hello world";
	add_final->next = NULL;

	printf("lst_add_back:\n");
	ft_lstadd_back(&lista, add_final);

	size = 0;
	size = ft_lstsize(lista);
	printf("length of lista after test is: %d\n", size);
	free_list(lista);

	return (0);
}
*/