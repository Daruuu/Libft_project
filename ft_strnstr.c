/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:52:31 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 23:52:41 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
localiza la 1ra aparacion de needle en haystack  
*/
#include <string.h>
#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;

	while (haystack[i] != '\0' && i < len - 1)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = strstr(largestring, smallstring);

	return (0);
}
