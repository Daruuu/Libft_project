/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:03:52 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/11 21:49:01 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_strlen_n(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

static char	*ft_strdup_n(const char *s1)
{
	unsigned int	size_s1;
	unsigned int	i;

	size_s1 = ft_strlen_n((char *)s1);
	if (!s1)
		return (NULL);


	


	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	size_s;
	size_t			i;

	size_s = ft_strlen_n((char *)s);
	if (!s)
		return (NULL);
	if (start > size_s)
		return (ft_strdup(""));
	size_s -= start;
	if (size_s < len)
		len = size_s;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
