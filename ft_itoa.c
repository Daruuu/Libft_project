/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:20:35 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/14 02:57:16 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_number(int nbr)
{
	int			len_num;
	long int	temporal;

	if (!nbr)
		return (0);
	if (nbr < 0)
	{
		len_num++;
		temporal = -nbr;
	}
	if (nbr == 0)
	{
		len_num = 1;
	}
	else
	{
		while (temporal > 0)
		{
			temporal /= 10;
			len_num++;
		}
	}
	return (len_num);
}

char	*ft_itoa(int n)
{
	

	return (0);
}
