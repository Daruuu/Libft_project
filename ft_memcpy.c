/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:01:34 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/09 02:55:38 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ch_dst;
	char	*ch_src;

	ch_dst = (char *) dst;
	ch_src = (char *) src;

	i = 0;
	if (ch_src > ch_dst)
	{
		while (i < n)
		{
			ch_dst[i] = ch_src[i];
			i++;
		}
	}
	else if (ch_src < ch_dst)
	{
		while (n > i)
		{
			ch_dst[i] = ch_src[i];
			i++;
		}
	}
	return ((void *)ch_dst);
}
/*int main() 
{
    char src[] = "Hola, mundo!";
    char dst[20];

    //ft_memcpy(dst, src, strlen(src) + 1);  // Copiar el contenido de src a dst

    printf("Copia exitosa: %s\n", dst);
    printf("%s\n", ft_memcpy(dst, src, 4));

    return 0;
}*/
