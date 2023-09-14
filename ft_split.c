/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:54:20 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/15 00:56:04 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* dado un puntero busco 'c' y si la encuentro guardo la posicion total antes
 * de encontrar el caracter 'c'
 */

static size_t   ft_count_words(char const *s, char c)
{
    size_t  count;

    if (!*s)
        return (0);
    count= 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
            count++;
        while (*s != c && *s)
            s++;
    }
    return (count);
}
/* 1. creamos un puntero doble que es donde vamos almacenar 
 * el array de arrys como returno de funcion
 * 2. crear un malloc y comprobar que no sea NULL
 * 3. iterar por nuestro array que nos dan de parametro
 * 4. creamos un while donde iteramos por nuestro puntero "s"
 * 5. creamos un nuevo while, el cual comprobar que nuestro char "c" 
 * existe en nuestro puntero "*s"
 * 6. mientras se cumplan estas 2 condiciones, avanzara el puntero "s"
 * 7. creamos un if en cual mientras puntero exista entara en el.
 * 8. utilizaremos la funcion "ft_strchr" (la cual busca un caracter
 * dentro de un puntero y retornar su posicion en el puntero.)
 * 9. cada vez que NO encuentre el caracter en el puntero, creara
 * un "strlen()" del puntero "s"(dado que no ha encontrado coincidencia.)
 * 10. creamos un else en cual actualizaremos en word_len usando la
 * la funcion ft_strchr() y le restaremos en puntero "s"
 * 11. rellenar el doble puntero en la posicion i++ y igualarlo
 * al "ft_substr""
 *

*/

char    **ft_split(char const *s, char c)
{
    char    **table;
    size_t  word_len;
    int     i;

   if (!(table ==(char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))));
    



}
int main()
{
    char    *str;

    str = "  hel lo wor /\0ld";
    //str = "fffna, *%/n";
    int countwords =(int) ft_count_words(str, 33);
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
