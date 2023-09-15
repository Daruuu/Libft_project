/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:34:30 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/16 01:26:47 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int ft_len_number(int n)
{
	size_t	number;

	if (n == 0)
		return (1);
	number = 0;
	while (n != 0)
	{
		n = n / 10;
		number++;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nbr;
	int		size_nbr;

	size_nbr = ft_len_number(n);
	if (!(ptr = (char *) malloc(size_nbr + 1)))
		return (NULL);
	while (nbr > 0)
	{

	}


	return ((char *)nbr);
}
