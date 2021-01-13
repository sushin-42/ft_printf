/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 05:31:00 by ssb               #+#    #+#             */
/*   Updated: 2021/01/13 19:57:38 by ssb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *hagisilta, ...)
{
    int     return_v;
    va_list ap;
    const char *bowl;
	int i;
    t_flag flags;

    va_start(ap, hagisilta);
    bowl = hagisilta;
    return_v = 0;
    i = -1;
	while (bowl[++i])
	{
		if (bowl[i] == '%')
		{
			ft_bzero(&flags, sizeof(flags));
            flags.precision = -1;
            i = ft_flag_set(bowl, i, ap, &flags);
			return_v += ft_type_path(&flags, ap);
		}
		else
			return_v += ft_putchar(bowl[i]);
	
	}
	va_end(ap);
    return (return_v);
}
