
/* buscar una subcadena (needle) dentro de una cadena más grande (haystack)
 con un límite de longitud (len)*/

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/

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
		while (needle[j] == haystack[i + j] && (i + j) < len && haystack[i +j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    size_t len = 10; // Ajusta la longitud según tus necesidades

    // Utiliza tu función ft_strnstr
    char *result_ft = ft_strnstr(largestring, smallstring, len);

    // Utiliza la función real strnstr
    char *result_str =  strnstr(largestring, smallstring, len);

    // Compara los resultados
    if ((result_ft == NULL && result_str == NULL) || (result_ft && result_str && strcmp(result_ft, result_str) == 0))
        printf("La función ft_strnstr y strnstr coinciden.\n");
    else
        printf("La función ft_strnstr y strnstr NO coinciden.\n");
}*/