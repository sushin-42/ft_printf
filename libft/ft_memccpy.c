/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:25:23 by sushin            #+#    #+#             */
/*   Updated: 2020/11/23 17:21:31 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (const unsigned char *)src;
	while (n > 0)
	{
		*dst_c = *src_c;
		if (*src_c == (unsigned char)c)
			return (dst_c + 1);
		n--;
		dst_c++;
		src_c++;
	}
	return (0);
}
