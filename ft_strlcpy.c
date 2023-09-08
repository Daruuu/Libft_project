/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:44:09 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/08 21:39:55 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  src_size;

    if (!(dst || src))
        return (0);
    src_size = 0;

    while (src [src_size])
        src_size++;
    i = 0;
    while (src[i] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_size);
}
/*int main()
{
    char    *buffer[19];
    char    *src;

    src = "hello world my friend";
    len = 9;
    size_t  result;

    //result = ft_strlcpy((char *)buffer, src, len);
    result = strlcpy((char *)buffer, src, len);
    printf("%d",(int) result);

    return (0);
}*/
