/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:47:13 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 20:02:04 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*strrchr(const char *s, int c)
{
	unsigned char	ch_c;
	unsigned int	i;

	ch_c = (char )c;
	i = sizeof(*s);
	while (s[i] > 0)
	{
		if (s[i] == ch_c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}

int main()
{
    const char *s;
    char *ptr;
    const char ch = 'o';

    s = "hello world";
    ptr = ft_strrchr(s, ch);
    printf("first occurrence of the '%c' in '%s' string is: '%s'", ch, s, ptr);
}
