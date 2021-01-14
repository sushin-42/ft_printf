
#include "ft_printf.h"

int ft_type_path(t_flag *flags, va_list ap)
{
    int return_v;

    return_v = 0;
    if (flags->type == 'c')
        return_v = ft_type_char(flags, va_arg(ap, int));
    else if (flags->type == 's')
        return_v = ft_type_string(flags, va_arg(ap, char *));
    else if (flags->type == 'd')
        return_v = ft_type_int(flags, va_arg(ap, int));
    else if (flags->type == 'i')
        return_v = ft_type_int(flags, va_arg(ap, int));
    else if (flags->type == 'x')
        return_v = ft_type_hexa(flags, va_arg(ap, unsigned int), 0);
    else if (flags->type == 'X')
        return_v = ft_type_hexa(flags, va_arg(ap, unsigned int), 1);
    else if (flags->type == 'u')
        return_v = ft_type_unint(flags, va_arg(ap, unsigned int));
//    else if (flags->type == 'p')
//        return_v = ft_type_pointer_add(flags, va_arg(ap, unsigned long long));
    else if (flags->type == '%')
        return_v = ft_type_percent(flags);
    return (return_v);
}
