#include "ft_printf.h"

int ft_type_unint(t_flag *flags, unsigned int i)
{
    int return_v;
    char *a_i;

    return_v = 0;
    if (flags->precision == 0 && i == 0)
    {
        return_v = ft_putwidth(flags->width, 0, 0);
        return (return_v);
    }
    a_i = ft_unitoa(i);
    return_v = ft_plus_int(a_i, flags);
    free(a_i);
    return (return_v);
}
