/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:47:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 22:25:41 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	find;
	int		i;
	int		len;

	find = (char)c;
	len = 0;
	while (s[len])
		len++;
	i = len;
	while (s[i] > 0)
	{
		if (s[i] == find)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == find)
		return ((char *)&s[i]);
	return (0);
}
/*int main()
{
    const char *s = "hello world";
    const char *ptr;
	int	ch;

    //ch = 'o';
    ch = 111;

    //s = "hello world";
    ptr = (char *) ft_strrchr(s, ch);
    printf("first occurrence of the '%c' in '%s' string is: '%s'", ch, s, ptr);
}*/
