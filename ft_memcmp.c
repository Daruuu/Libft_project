/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:03:57 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/09 19:35:32 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	character;
	size_t	i;

	uc_s =  (unsigned char *) s;
	character = c;
	i = 0;

	while (i < n)
	{
		if (uc_s[i] == character)
			return ((const void *)uc_s[i]);

	}
	return ( 0 );
}
