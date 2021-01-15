#include "ft_printf.h"

t_flag  *ft_flag_width_star(va_list ap, t_flag *flags)
{
    flags->width = va_arg(ap, int);
    if (flags->width < 0)
    {
        flags->minus = 1;
        flags->zero = 0;
        flags->width *= -1;
    }
    return (flags);
}
