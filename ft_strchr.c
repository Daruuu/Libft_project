/*
localiza un caracter en uan cadena de ellos.
devuelve un puntero a la 1ra ocurrecnai del caracter c
en el string s
*/
char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if(s[i] = c)
            return(s[i]);
        i++;
    }
    return();
}