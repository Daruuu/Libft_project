/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:26:25 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 22:49:16 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	if (n == 0)
		return (0);
	i = 0 ;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}

/*int	main()
{
	const char	*str1 = "hello world";
	const char	*str2 = "hellw world";

	const char	*str3 = "hello world";
	const char	*str4 = "hellw world";
	size_t		len_n;
	size_t		len_n1;

	len_n = 0;
	len_n1 = 0;
	printf("%d\n",strncmp(str1, str2, len_n));

	printf("%d\n", ft_strncmp(str3, str4, len_n1));

	return (0);
}*/
