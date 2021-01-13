#include "ft_printf.h"

int ft_put_string(t_flag *flags, char *str)
{
    int return_v;

    return_v = 0;
    if (flags->precision >= 0)
    {
        write(1, str, flags->precision);
        return_v = flags->precision;
    }
    else if (flags->precision == -1)
    {
        write(1, str, ft_strlen(str));
        return_v = ft_strlen(str);
    }
    return (return_v);
}

int ft_type_string(t_flag *flags, char *str)
{
    int return_v;

    return_v = 0;
    
    if (str == NULL)
        str = "(null)";
    if ((size_t)flags->precision > ft_strlen(str))
        flags->precision = ft_strlen(str);
    if (flags->minus == 1)
        return_v += ft_put_string(flags, str);
    if (flags->precision >= 0)
        return_v += ft_putwidth(flags->width, flags->precision, 0);
    else if (flags->precision == -1)
        return_v += ft_putwidth(flags->width, ft_strlen(str), 0);
    if (flags->minus == 0)
        return_v += ft_put_string(flags, str);
    return (return_v);
}
