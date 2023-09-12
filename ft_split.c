/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:54:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 09:55:28 by dasalaza         ###   ########.fr       */
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

static size_t   ft_countCharacters(char const *s, char c)
{

    return ();
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