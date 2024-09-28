/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 22:36:45 by dasalaza          #+#    #+#             */
/*   Updated: 2024/09/27 21:28:11 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!lst || !f)
		return ;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void to_uppercase(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
}

// Función principal de testeo
int main()
{
	// Crear nodos para la lista
	t_list *node1 = ft_lstnew(strdup("primer nodo"));
	t_list *node2 = ft_lstnew(strdup("segundo nodo"));
	t_list *node3 = ft_lstnew(strdup("tercer nodo"));

	// Enlazar los nodos para formar la lista
	node1->next = node2;
	node2->next = node3;

	// Testear ft_lstiter con una función de impresión
	printf("Imprimir lista:\n");
	ft_lstiter(node1, print_content);

	ft_lstiter(node1, to_uppercase);

	printf("\nImprimir contenido modificado de la lista:\n");
	ft_lstiter(node3, print_content);

	ft_lstclear(&node3, free);
	return 0;
}*/
