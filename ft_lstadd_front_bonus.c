/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:53 by dasalaza          #+#    #+#             */
/*   Updated: 2025/05/04 18:56:40 by dasalaza         ###   ########.fr       */
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
