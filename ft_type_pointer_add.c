#include "ft_printf.h"
int ft_put_pointer_add(char *pointer_n)
{
    int return_v;
    int pointer_len;

    pointer_len = ft_strlen(pointer_n);
    return_v = 0;
    write(1, "0x", 2);
    write(1, pointer_n, pointer_len);
    return (return_v + 2 + pointer_len);
}

int ft_type_pointer_add(t_flag *flags, unsigned long long n)
{
    int     return_v;
    char    *pointer_n;
    
    return_v = 0;
    if (flags->precision == 0 && n == 0)
    {
        write(1, "0x", 2);
        return_v = ft_putwidth(flags->width, 2, 0);
        return (return_v + 2);
    }
    pointer_n = ft_change_base(n, 16);
    if (flags->minus == 1)
        return_v += ft_put_pointer_add(pointer_n);
    return_v += ft_putwidth(flags->width, ft_strlen(pointer_n) + 2, 0);
    if (flags->minus == 0)
        return_v += ft_put_pointer_add(pointer_n);
    free(pointer_n);
    return (return_v);
}
