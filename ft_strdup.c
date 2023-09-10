/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:18:05 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 06:55:18 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    int     i;
    char    *dup;

    i = 0;
    dup = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (dup == NULL)
        return (0);
    while(s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
