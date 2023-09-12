/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:54:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:54 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_strlen_new(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

static size_t   ft_count_characters(char const *s, char c)
{
    size_t  i;
    size_t  counter;
    
    i = 0;
    counter = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            counter++;
        i++;
    }
    if (*s != c)
        return (0);
    return (counter);
}

char    **ft_split(char const *s, char c)
{
    size_t  size_s;

    size_s = ft_strlen_new((char *)s);
    if (!s || !c)
        return (0);

    return (0);
}

int main()
{
    char const  *ss;
    char find;

    ss = "hello!zzzzzzzzz";
    find = 'z';

    return (0);
}
