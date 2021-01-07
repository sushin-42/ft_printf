/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssb <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 05:31:00 by ssb               #+#    #+#             */
/*   Updated: 2021/01/08 08:26:36 by ssb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *hasival, ...)
{
    int     return_v;
    va_list ap;
    const char *hagisilta;

    va_start(ap, hasival);
    hagisilta = hasival;
    return_v = 0;
    





    va_end(ap);
    return (return_v);
}
