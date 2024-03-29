/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <sushin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:18:05 by sushin            #+#    #+#             */
/*   Updated: 2021/01/15 08:58:07 by ssb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_type_check(int c, t_flag *flags)
{
    if (c == 'c' || c == 's' || c == 'd' || c == 'i' 
            || c == 'x' || c == 'X' || c == 'u' || c =='p' || c =='%')
    {
        flags->type = c;
        return (1);
    }
    return (0);
}

int ft_flag_precision(const char *bowl, int i, t_flag *flags, va_list ap)
{
    if (bowl[i] == '*')
        flags->precision = va_arg(ap, int);
    else
    {    
        flags->precision = 0;
        while (ft_isdigit(bowl[i]))
        {    
            flags->precision = (flags->precision * 10) + (bowl[i] - '0');
            i++;
    
        }
    }
    return (i);
}

int ft_flag_set(const char *bowl, int i, va_list ap, t_flag *flags)
{
    while (bowl[++i])
    {
        if (bowl[i] == '0' && flags->minus == 0 && flags->width == 0)
            flags->zero = 1;
        else if (bowl[i] == '-')
        {    
            flags->minus = 1;
            flags->zero = 0;
        }
        else if (bowl[i] == '*')
            ft_flag_width_star(ap, flags); 
        else if (ft_isdigit(bowl[i]))
            flags->width = (flags->width * 10) + (bowl[i] - '0');
        else if (bowl[i] == '.')
            i = ft_flag_precision(bowl, ++i, flags, ap);
        if (ft_type_check(bowl[i], flags))
            break ;
    }
    return (i);
}   
