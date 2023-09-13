#include "libft.h"

voidft_putnbr_fd(int n, int fd)
{
    unsigned int    nbr;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nbr = (unsigned int)(n * -1);
    }
    else
    {

    }

}