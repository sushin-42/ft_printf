#include "ft_printf.h"

char    ft_upper(int a)
{
    if (a >= 'a' && a <= 'z')
        a = a - 32;
    return (a);
}

char    *ft_str_upper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        str[i] = ft_upper(str[i]);
        i++;
    }
    return (str);
}
