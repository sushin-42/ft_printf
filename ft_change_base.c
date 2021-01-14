#include "ft_printf.h"

char    *ft_put_change(unsigned long long n, char *temp, int base, int n_len)
{
    while (n != 0)
    {
        if ((n % base) < 10)
            temp[n_len - 1] = (n % base) + 48;
        else if ((n % base) >= 10)
            temp[n_len - 1] = (n % base) + 87;
        n_len--;
        n /= base;
    }
    return (temp);
}

char    *ft_change_base(unsigned long long n, int base)
{
    char                *temp;
    unsigned long long  copy_n;
    int                 n_len;

    copy_n = n;
    n_len = 0;
    if(n == 0)
        return (ft_strdup("0"));
    while (copy_n != 0)
    {
        copy_n /= base;
        n_len++;
    }
    if(!(temp = (char *)malloc((n_len + 1) * sizeof(char))))
        return (0);
    temp[n_len] = '\0';
    temp = ft_put_change(n, temp, base, n_len);
    return (temp);
}
