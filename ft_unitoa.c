#include "ft_printf.h"

unsigned int	ft_unint_len_check(unsigned int n)
{
	unsigned int	i;

	if (n < 0)
		i = 1;
	else if (n > 0)
		i = 0;
	else
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void			ft_unint_put_tmp(char *temp, unsigned int n, unsigned int n_len)
{
	while (n_len > 0)
	{
		temp[n_len - 1] = (n % 10) + '0';
		n = n / 10;
		n_len--;
	}
}

char				*ft_unitoa(unsigned int n)
{
	char			*temp;
	unsigned int	n_len;

	n_len = ft_unint_len_check(n);
	if (!(temp = (char *)malloc((n_len + 1) * sizeof(char))))
		return (0);
	ft_unint_put_tmp(temp, n, n_len);
	temp[n_len] = '\0';
	return (temp);
}
