#include "ft_printf.h"

int ft_plus_put_int(char *a_i, t_flag *flags)
{
    int return_v;

    return_v = 0;
    if(flags->precision >= 0)
        return_v = ft_putwidth(flags->precision, ft_strlen(a_i), 1);
    write(1, a_i, ft_strlen(a_i));
    return_v += ft_strlen(a_i);
    return (return_v);
}

int ft_minus_put_int(char *a_i, t_flag *flags)
{
    int return_v;

    return_v = 0;
    if (flags->zero == 0 || flags->precision >= 0)
        write(1, "-", 1);
    if(flags->precision >= 0)
        return_v = ft_putwidth(flags->precision, ft_strlen(a_i), 1);
    write(1, a_i, ft_strlen(a_i));
    return_v += ft_strlen(a_i);
    return (return_v + 1);
}

int ft_minus_int(char *a_i, t_flag *flags)
{
    int return_v;

    return_v = 0;
    if (flags->precision >= 0 && (size_t)flags->precision < ft_strlen(a_i))
        flags->precision = ft_strlen(a_i);
    if (flags->precision >= 0)
        flags->width -= flags->precision;
    if (flags->minus == 1)
        return_v += ft_minus_put_int(a_i, flags);
    if (flags->precision >= 0)
        return_v += ft_putwidth(flags->width, 1, 0);
    else
    {   
        if (flags->zero == 1 && flags->precision == -1)
            write(1, "-", 1);
        return_v += ft_putwidth(flags->width, ft_strlen(a_i) + 1, flags->zero);            
    }
    if (flags->minus == 0)
        return_v += ft_minus_put_int(a_i, flags);
    return (return_v);
}

int ft_plus_int(char *a_i, t_flag *flags)
{
    int return_v;

    return_v = 0;
    if (flags->precision >= 0 && (size_t)flags->precision < ft_strlen(a_i))
        flags->precision = ft_strlen(a_i);
    if (flags->precision >= 0)
        flags->width -= flags->precision;
    if (flags->minus == 1)
        return_v += ft_plus_put_int(a_i, flags);
    if (flags->precision >= 0)
        return_v += ft_putwidth(flags->width, 0, 0);
    else
        return_v += ft_putwidth(flags->width, ft_strlen(a_i), flags->zero);            
    if (flags->minus == 0)
        return_v += ft_plus_put_int(a_i, flags);
    return (return_v);
}

int ft_type_int(t_flag *flags, int i)
{
    int return_v;
    char *a_i;
    
    return_v = 0;
    if (flags->precision == 0 && i == 0)
    {
        return_v = ft_putwidth(flags->width, 0, 0);
        return (return_v);
    }
    if (i < 0)
    {
        i *= -1;
        a_i = ft_unitoa(i);
        return_v = ft_minus_int(a_i, flags);    
    }
    else
    {
        a_i = ft_itoa(i);
        return_v = ft_plus_int(a_i, flags);
    }
    free(a_i);
    return (return_v);
}
