/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:54:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/14 21:56:57 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* dado un puntero busco 'c' y si la encuentro guardo la posicion total antes
 * de encontrar el caracter 'c'
 */


static int  ft_count_words(char const *s, char c)
{
    size_t  count_words;
    int i;

    if (!s || !c)
        return (0);
    i = 0;
    count_words = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            count_words++;
        while (s[i] && s[i] != c)
            i++;
        i++;
    }
    return (count_words);
}

int main()
{
    char    *str;

    str = "  hel lo wor /\0ld";
    //str = "^^^^1 ^^^a, *%/n";

    int countwords = ft_count_words(str, 33);

    printf("%d", countwords);

    return (0);
}













/*
static size_t ft_count_words(char const *s, char c)
{
    int counter;

    if (!s || !c)
        return (0);
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

static size_t   ft_count_chars(char const *s, char c)
{
    size_t  counter;

    if (!s || !c)
        return (0);
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
static char *ft_strndup_split(char *str, size_t size)
{
    size_t i;
    char *dup;

    if (!str)
        return (0);
    i = 0;
    while (str[i] != '\0')
        i++;
    dup = malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (NULL);
    i = 0;
    while (str[i] != '\0')
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

char **ft_split(char const *s, char c)
{
    size_t i;
    const char *start;
    char **table;

    if (!s || !c)
        return (0);
    if (!(table == (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
        ;
    return (NULL);
    i = 0;
    while (*s)
    {
        if (s[i] != c)
        {
            start = s;
            while (*s && *s != c)
                s++;
            table[i++] = ft_strndup_split(start, s - start);
            if (!table[i - 1])
            {
                while (i > 0)
                    free(table[i]);
                i--;
            }
            free(table);
            return (NULL);
        }
        else
            s++;
    }
    table [i] = '\0';
    return (table);
}

int main()
{
    char const *ss;
    char find;

    ss = "      c   ";
    find = ' ';
    printf("%d\n", (int)ft_count_chars(ss, find));

    return (0);
}
*/
