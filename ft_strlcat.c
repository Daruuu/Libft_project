/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:40:56 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/09 00:11:06 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* agrega la cadena (src) al final del (dst) y agrega como maximo 
dstsize - strlen(dst) - 1 caracter */
/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dst_len)
		return (src_len + dstsize);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*int main() {

    char	*string= "Hello, world!";
    char	*needle = "or";
	size_t	size;
	size_t	result;

	size = 5;
    result = ft_strlcat(string, needle, size);

    //printf("local: %zu\n",result);
	printf("original: %zu\n", strlcat(string, needle, size));

    return (0);
}*/
