/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:08:42 by sushin            #+#    #+#             */
/*   Updated: 2020/11/23 17:48:09 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dst_c;
	const char		*src_c;
	unsigned int	i;

	src_c = (const char *)src;
	dst_c = (char *)dst;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len > i)
		{
			dst_c[len - i - 1] = src_c[len - i - 1];
			i++;
		}
	}
	return (dst);
}
