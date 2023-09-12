/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:54:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/12 22:40:30 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_strlen_new(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

/* dado un puntero busco 'c' y si la encuentro guardo la posicion total antes
 * de encontrar el caracter 'c' 
*/
static size_t   ft_count_chars(char const *s, char c)
{
    size_t  counter;
    
    counter = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            counter++;
        while (*s && *s != c)
            s++;
    }
    return (counter);
}

char    **ft_split(char const *s, char c)
{
    size_t      size_s;
    size_t      i;
    size_t      index;
    char        **table;

    size_s = ft_strlen_new((char *)s);
    if (!s || !c)
        return (0);
    table = malloc(sizeof(char *) * (ft_count_chars(s, c) + 1));
    if (!table)
        return (NULL);
    while (i < (size_s - 1))
    {
        if (s[i] != c)
            

    }
    return (0);
}

int main()
{
    char const  *ss;
    char find;

    ss = "      c   ";
    find = ' ';
    printf("%d\n",(int)ft_count_chars(ss, find));


    return (0);
}
