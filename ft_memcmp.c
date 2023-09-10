/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 05:19:44 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 05:55:06 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *uc_s1;
    unsigned char   *uc_s2;
    size_t          i;
    
    uc_s1 = (unsigned char *)s1; 
    uc_s2 = (unsigned char *)s2; 
    i = 0;
    while (i < n)
    {
        if (uc_s1[i] != uc_s2[i])
            return (uc_s1[i] - uc_s2[i]);
        i++;
    }
    return (0);
}
