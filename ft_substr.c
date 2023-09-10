/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:34:50 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 09:53:56 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  len_substr;
    char    *substr;

    len_substr = len - (size_t)start;
    substr = malloc(sizeof(char *) * len_substr + 1);
    if (substr == NULL)
        return (0);
    i = 0;
    while (i < len_substr)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}*/
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  len_s;
    char    *ptr;

    len_s = 0;
    if (!s)
        return (NULL);
    while (s[len_s] != '\0')
        len_s++;
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (NULL);
    i = start;
    j = 0;
    while (s[i] != '\0' && j < len)
    {
        ptr[j] = s[i];
        i++;
        j++;
    }
    ptr[j] = '\0';
    return (ptr);
}
