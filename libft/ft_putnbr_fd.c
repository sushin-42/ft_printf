/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:42:40 by sushin            #+#    #+#             */
/*   Updated: 2020/11/21 18:22:16 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	n_c;

	n_c = n;
	if (n_c < 0)
	{
		write(fd, "-", 1);
		n_c = n_c * (-1);
	}
	if (n_c > 9)
		ft_putnbr_fd(n_c / 10, fd);
	ft_putchar_fd((n_c % 10) + 48, fd);
}