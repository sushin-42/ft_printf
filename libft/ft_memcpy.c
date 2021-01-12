/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:02:45 by sushin            #+#    #+#             */
/*   Updated: 2020/11/23 17:17:02 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (const unsigned char *)src;
	if (dst_c == src_c)
		return (dst);
	while (n > 0)
	{
		*dst_c = *src_c;
		n--;
		dst_c++;
		src_c++;
	}
	return (dst);
}
