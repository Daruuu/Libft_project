/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:00:29 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/09 21:40:05 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			i;

	/*str = (unsigned char *)s;
	c = (unsigned char)c;*/
	str = (unsigned char *)s;
	character = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return ((void *)str);
			str++;
		}
		i++;
	}
	return (NULL);
}
/*void	*f_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
int	main()
{
	const void	*str = "rtfm is helpful";
	int	search;
	size_t	len;

	search = 'l';
	len	= 15;
	void	*result;

	result = ft_memchr(str, search, len);

	//printf("%");

	return (0);
}*/
