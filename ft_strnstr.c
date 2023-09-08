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

/* buscar una subcadena (needle) dentro de una cadena más grande (haystack)
 con un límite de longitud (len)*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
        j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
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
    char *result= ft_strnstr(largestring, smallstring, len);

    printf("%s\n", result);
    if (result != NULL)
        printf("substring found: %s\n", result);
    else
        printf("substring no found");
	return (0);
}