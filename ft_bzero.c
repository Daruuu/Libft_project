/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:27:27 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 02:38:59 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pivot_s;

	i = 0;
	pivot_s = (unsigned char *) s;
	while (i < n)
		pivot_s[i++] = '\0';
}
/*
int	main()
{
	unsigned char	*s;
	int		siz;
	unsigned int	i;
	unsigned int	len_s;


	siz = 10;

	s = (unsigned char *) malloc(siz * sizeof(char));
	if (s == NULL)
		return (0);

	len_s = sizeof(s);

	i = 0;
	printf("before function:\n");
	while (i < len_s)
	{
		s[i] = 'a';
		printf("%c", s[i]);
		i++;
	}

	ft_bzero(s, siz);

	printf("\nafter function:\n");

	i = 0;
	s[9] = '\0';
	while (i < sizeof(s))
	{
		printf("%d", s[i]);
		i++;
	}
	return (0);
}*/
