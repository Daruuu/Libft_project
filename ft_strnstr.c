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
localiza la 1ra aparacion de needle en haystack y recorre el puntero haystack hasta el maximo que es el (len) 
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	j = 0;

	while (haystack[i] != '\0' && i < len && len != 0)
	{
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
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
	size_t len;
	len = 4;
    char *ptr;

	/*const char *largestring1 = "Foo Bar Baz";
    const char *smallstring1 = "Bar";
	size_t len1;
	len1 = 4;
    char *ptr1;
	*/

    ptr = ft_strnstr(largestring, smallstring, len);
	printf("%d\n", ptr);
/*
    ptr1 = strnstr(largestring1, smallstring1, len1);
	printf("%d\n", ptr1);
*/
	return (0);
}