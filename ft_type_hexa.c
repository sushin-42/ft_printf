#include "ft_printf.h"

int ft_type_hexa(t_flag *flags, unsigned int n, int upper)
{
    int     return_v;
    char    *hexa_n;

    return_v = 0;
    if (flags->precision == 0 && n == 0)
    {
        return_v = ft_putwidth(flags->width, 0, 0);
        return (return_v);
    }
    hexa_n = ft_change_base((unsigned long long) n, 16);
    if (upper == 1)
    {    
        hexa_n = ft_str_upper(hexa_n);
    }
    return_v += ft_plus_int(hexa_n, flags);
    free(hexa_n);
    return (return_v);
}
