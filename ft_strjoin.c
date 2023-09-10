/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:31:24 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/10 10:53:12 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strlen1(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*totalstring;
	int		size1;
	int		size2;
	int		i;

	size1 = ft_strlen1(s1);
	size2 = ft_strlen1(s2);
	i = 0;
	totalstring = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	if (!totalstring)
		return (NULL);
	size1 = 0;
	while (s1[size1])
	{
		totalstring[size1] = s1[size1];
		size1++;
	}
	while (s2[i])
	{
		totalstring[size1 + i] = s2[i];
		i++;
	}
    totalstring [size1 + i] = '\0';
	return (totalstring);
}
