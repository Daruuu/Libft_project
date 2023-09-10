/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 00:21:24 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 04:53:20 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*localiza un caracter dentro de un puntero char.
devuelve un puntero a la 1ra ocurrencia del caracter c en el string s */
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    find;
    int     i;

    i = 0;
    find = c;
    while (s[i] != '\0')
    {
        if (s[i] == find)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == find)
        return ((char *) &s[i]);
    return (0);
}
