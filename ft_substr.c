/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:34:50 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/11 00:13:48 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  len_s;
    char    *substr;

    len_s = 0;
    while (s[len_s])
        len_s++;
    /*ajustamos la len para que no haya desbordamiento */
    if (len > len_s - start)
        len = len_s - start;
    substr = malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[len] = '\0';
    return (substr);
}
/*
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  len_s;
    char    *ptr;

    len_s = ft_strlen1(s);
    if (!s)
        return (0);
    if (len_s < start)
        len = 0;
    if ((size_t)ft_strlen1(s + start) < len)
        len = ft_strlen1(s + start);
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (NULL);
    i = 0;
    while(ptr[i] != '\0' && i < (len + 1))
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    //ft_strlcpy(ptr, s + start, len + 1);
    return (ptr);
}
*/
