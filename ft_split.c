/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:27:19 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/16 14:46:36 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	int		i;
	size_t	size_word;

	table = (char **)malloc((sizeof(char *) * (ft_count_words(s, c) + 1)));
	if (!table || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				size_word = ft_strlen(s);
			else
				size_word = ft_strchr(s, c) - s;
			table[i] = ft_substr(s, 0, size_word);
			s += size_word;
			i++;
		}
	}
	table[i] = '\0';
	return (table);
}

int	main()
{


	return (0);
}
