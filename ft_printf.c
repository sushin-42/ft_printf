/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 05:31:00 by ssb               #+#    #+#             */
/*   Updated: 2021/01/13 00:14:31 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *hagisilta, ...)
{
    int     return_v;
    va_list ap;
    const char *bowl;
	int i;

    va_start(ap, hagisilta);
    bowl = hagisilta;
    return_v = 0;
    i = -1;
	while (bowl[++i])
	{
		if (bowl[i] == '%')
		{
			i = ft_flag_set(bowl, i, ap);
			return_v += ft_type_parse();
		}
		else
		{
			ft_putchar_fd(hagisilta[i], 1);
			return_v++;
		}
	}
	va_end(ap);
    return (return_v);
}
