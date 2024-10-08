/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:53 by dasalaza          #+#    #+#             */
/*   Updated: 2024/09/27 19:22:55 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
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

int	main(void)
{
	// crear nodos
	t_list	*node01 = (t_list *) malloc (sizeof(t_list));
	t_list	*node02 = (t_list *) malloc (sizeof(t_list));
	t_list	*node03 = (t_list *) malloc (sizeof(t_list));
	t_list	*node04 = (t_list *) malloc (sizeof(t_list));

	//asginar contenido a cada nodo
	
	node01->content = "hello";
	node01->next = NULL;
	node02->content = "world";
	node02->next = NULL;
	node03->content = "this is";
	node03->next = NULL;
	node04->content = "a testing";
	node04->next = NULL;

	// CONSTRUIR LA LISTA
	node01->next = node02;
	node02->next = node03;
	node03->next = node04;

	printf("show test_lista before call ft_lstadd_front:\n");

	int	i = 0;
	t_list	*current = node01;

	printf("\n");
	while (current != NULL)
	{
		printf("Mem: %p node[%d] -> %s\n", current->content, i, (char *) current->content);
		i++;
		current = current->next;
	}
	// crear nuevo nodo para add front lista
	t_list	*node_to_add_front = (t_list *) malloc (sizeof(t_list));
	if (!node_to_add_front)
	{
		free(node_to_add_front);
		free_list(node01);
		return (0);
	}

	node_to_add_front->content = "start here";

	ft_lstadd_front(&node01, node_to_add_front);

	printf("\nshow test_lista after call ft_lstadd_front: \n");

	current = node01;
	i = 0;
	printf("\n");
	while (current != NULL)
	{
		printf("Mem: %p node[%d]-> %s\n", current->content , i, (char *) current->content);
		i++;
		current = current->next;
	}
	free_list(node01);
	return (0);
}*/
