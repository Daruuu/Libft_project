/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:31:05 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/11 21:01:15 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*static int  ft_strlen1(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (0);
}
*/
/*char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  len_s1;
    size_t  i;
    size_t  j;
    char    *ptr;
    char    *set_cpy;
    char    *s1_cpy;

    len_s1 = ft_strlen1(s1);

    s1_cpy = (char *)s1;

    ptr = malloc(sizeof(char) * len_s1 + 1);
    if (!ptr)
        return (NULL);

    i = 0;
    j = 0;
    set_cpy = (char *)set;
    while (s1_cpy[i] != '\0')
    {
        while (set_cpy[j] != '\0')
        {
            if (s1_cpy[i] == set_cpy[j])
                s1_cpy[i] = ' ';
            j++;
        }
        i++;
    }
    len_s1 = ft_strlen1(s1_cpy);
    printf("%s\n",(char *) len_s1);
    return (s1_cpy);
}*/

int main()
{
    char const  *s1;
    char const  *set;

    s1 = "helloworldello";
    set = "e";
    ft_strtrim(s1, set);

    return (0);
}


/*
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  size_s1;
    size_t  i;
    size_t  counter;
    char    *ptr;
    char    *set_cpy;

    if (!s1 || !set)
        return (NULL);
    size_s1 = ft_strlen(s1);
    i = 0;
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    while (size_s1 > i && '\0' && ft_strchr(set, s1[size_s1 - 1]))
        size_s1--;

    ptr = malloc(sizeof(char) * s1[size_s1 - counter]);
    if (!ptr)
        return (NULL);


    return (0);
}
*/
