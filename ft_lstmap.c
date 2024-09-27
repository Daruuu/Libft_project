/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 22:53:47 by dasalaza          #+#    #+#             */
/*   Updated: 2024/09/27 19:06:44 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*tmp;
	t_list	*result;

	if (!lst)
		return (0);
	new_lst = NULL;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		result = ft_lstnew(tmp);
		if (!result)
		{
			del(tmp);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, result);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void	*f(void *content)
{
	int	*value;	
	int	*result;

	value = (int *)content;
	result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = (*value) * 2;
	return (result);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n",*(int *)(list->content));
		list = list->next;
	}
}

int	main(void)
{
	int val1 = 10;
    int val2 = 20;
    int val3 = 30;
    int val4 = 40;

	t_list	*node1 = ft_lstnew(&val1);
	t_list	*node2 = ft_lstnew(&val2);
	t_list	*node3 = ft_lstnew(&val3);
	t_list	*node4 = ft_lstnew(&val4);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	t_list	*new_list_test = ft_lstmap(node1, f, del);
	printf("Lista original:\n");
	print_list(node1);
	printf("\nNueva lista (multiplicada por 2):\n");
	print_list(new_list_test);
	return (0);
}
*/
