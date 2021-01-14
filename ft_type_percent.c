#include "ft_printf.h"

int ft_type_percent(t_flag *flags)
{
    int return_v;

    return_v = 0;
    if (flags->minus == 1)
        return_v = ft_putchar('%');
    return_v += ft_putwidth(flags->width, 1, flags->zero);
    if (flags->minus == 0)
        return_v += ft_putchar('%');
    return (return_v);
}
