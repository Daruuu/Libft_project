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
    size_t  size_s;
    char    *substr;

    if (!s)
        return (NULL);
    size_s = 0;
    while (s[size_s] != '\0')
        size_s++;
    if (start > size_s)
        substr = malloc(sizeof(char) * 1);
    else if (len < size_s - start)
        substr = malloc(sizeof(char) * ((size_s - start) + 1));
    else
        substr = malloc(sizeof(char) * (len + 1));
    if (substr == NULL)
        return (NULL);
    i = 0;
    while (i < len && (start + i < size_s))
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
