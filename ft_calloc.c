/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 06:56:32 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 07:22:51 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    char    *ptr;
    size_t  i;

    ptr = malloc(size * count);
    if (ptr == NULL)
        return (0);
    i = 0;
    while (i < (size * count))
    {
        ptr[i] = '\0';
        i++;
    }
    return ((void *) ptr);
}
