#include "ft_printf.h"

int ft_type_char(t_flag *flags, char c)
{
    int return_v;

    return_v = 0;
    if (flags->minus == 1)
        return_v += ft_putchar(c);
    return_v += ft_putwidth(flags->width, 1, 0);
    if (flags->minus == 0)
        return_v += ft_putchar(c);
    return (return_v);
}
