/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 03:10:11 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/09 04:31:46 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;
	size_t	i;

	c_dst = (char *)dst;
	c_src = (char *)src;
	i = 0;
	if (c_dst > c_src)
	{
		while (len > 0)
		{
			c_dst[len - 1] = c_src[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (c_dst);
}
/*int	main()
{
	char	dest[20];
	char	*src;
	size_t	len;

	src = "qwertyuiopasdfghjklzx";
	len = 20;
	ft_memmove(dest, src, len);
	//printf("%s\n", (void *)ft_memmove(dest, src, len));
	printf("%s\n", dest);

	return (0);
}*/
