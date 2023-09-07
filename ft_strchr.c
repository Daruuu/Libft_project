/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:25:51 by dasalaza          #+#    #+#             */
/*   Updated: 2023/09/07 19:34:36 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*localiza un caracter dentro de un puntero char.
devuelve un puntero a la 1ra ocurrencia del caracter c en el string s */

char    *ft_strchr(const char *s, int c)
{
    unsigned char   char_c;
    int             i;

    i = 0;
    char_c = (unsigned  char)c;
    while (s[i] != '\0')
    {
        if (s[i] == char_c)
            return ((char *) &s[i]);
        i++;
    }
    return (0);
}
/*int main()
{
    const char *s;
    char *ptr;
    const char ch = 'o';

    s = "hello world";
    ptr = ft_strchr(s, ch);
    printf("first occurrence of the '%c' in '%s' string is: '%s'", ch, s, ptr);
}*/
