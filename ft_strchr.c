/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:24:48 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/11 17:28:53 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* localiza un caracter dentro de un puntero char'
 * return un puntero a la 1ra ocurrencia del caracter c en el string s
*/
char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	i = 0;
	find = c;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == find)
		return ((char *)&s[i]);
	return (0);
}
