/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:53 by dasalaza          #+#    #+#             */
/*   Updated: 2024/04/17 03:46:39 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

int	main()
{
	t_list	*test_lista = NULL;

	test_lista = (t_list *) malloc (sizeof(t_list));
	if (!test_lista)
	{
		free(test_lista);
		return (0);
	}

	t_list	*node01;
	t_list	*node02;
	t_list	*node03;
	t_list	*node04;
	
	node01 = (t_list *) malloc (sizeof(t_list));
	node01->content = "hello";
	node01->next = NULL;

	if (!node01)
		free(node01);

	test_lista = node01;

	node02 = (t_list *) malloc (sizeof(t_list));
	node02->content = "world";
	node02->next = NULL;
	node01->next = node02;

	node03 = (t_list *) malloc (sizeof(t_list));
	node03->content = "this is";
	node03->next = NULL;
	node02->next = node03;

	node04 = (t_list *) malloc (sizeof(t_list));
	node04->content = "a testing";
	node04->next = NULL;
	node03->next = node04;

	t_list	*node_to_add_front = (t_list *) malloc (sizeof(t_list));
	if (!node_to_add_front)
	{
		free(node01);
		free(node02);
		free(node03);
		free(node04);
		return (0);
	}
	node_to_add_front->content = "start here";
	//node_to_add_front->next = NULL;

	printf("show test_lista before call ft_lstadd_front:\n");

	int	i = 0;

	t_list	*current = test_lista;
	t_list	*temp = NULL;

	while (current != NULL)
	{
		printf("node [%d] -> %s\n", i, (char *) current->content);
		temp = current;
		current = current->next;
		free(temp);
		i++;
	}
	// FREE MEMORY MAIN LIST "HERE" 
	//free(current);

	// EXECUTE FUNCTION 
	ft_lstadd_front(&test_lista, node_to_add_front);

	printf("\nshow test_lista after call ft_lstadd_front\n");

	current = test_lista;
	i = 0;
	while (current != NULL)
	{
		//printf("node [%d] -> %s\n", i, current->content);
		printf("node [%d] -> %s\n", i, (char *) current->content);
		temp = current;
		current = current->next;
		free(temp);
		i++;
	}

	return (0);
}
