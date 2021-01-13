
#include "ft_printf.h"

int ft_putwidth(int width, int diff, int has_zero)
{
    int i;
    int return_v;

    return_v = 0;
    i = width - diff;
    while (i > 0)
    {
        if (has_zero == 1)
            return_v += ft_putchar('0');
        else if (has_zero == 0)
            return_v += ft_putchar(' ');
        i--;
    }
    return (return_v);
}
