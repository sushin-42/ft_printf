/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:27:12 by sushin            #+#    #+#             */
/*   Updated: 2020/11/25 15:11:05 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_int_len_check(int n)
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

static void			ft_put_tmp(char *temp, long long n, unsigned int n_len)
{
	while (n_len > 0)
	{
		temp[n_len - 1] = (n % 10) + '0';
		n = n / 10;
		n_len--;
	}
}

char				*ft_itoa(int n)
{
	char			*temp;
	unsigned int	n_len;
	long long		n_c;

	n_c = n;
	n_len = ft_int_len_check(n);
	if (!(temp = (char *)malloc((n_len + 1) * sizeof(char))))
		return (0);
	if (n < 0)
	{
		temp[0] = '-';
		n_c = n_c * (-1);
		ft_put_tmp(temp + 1, n_c, n_len - 1);
	}
	else
		ft_put_tmp(temp, n, n_len);
	temp[n_len] = '\0';
	return (temp);
}
