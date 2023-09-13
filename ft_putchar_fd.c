
#include "libft.h"
/*
SYNOPSIS: output a character to given file
los file descriptors son números enteros utilizados para identificar y acceder a 
recursos de E/S en programas en lenguaje C en sistemas Unix y Unix-like. 
*/
void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}