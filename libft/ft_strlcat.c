/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:18:17 by sushin            #+#    #+#             */
/*   Updated: 2020/11/24 00:41:02 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	int		i;
	int		j;
	size_t	r_value;

	dst_len = ft_strlen(dst);
	if (dstsize < ft_strlen(dst))
		r_value = dstsize + ft_strlen(src);
	else
		r_value = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = dst_len;
	while (i < (int)(dstsize - dst_len - 1) && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dst_len < dstsize)
		dst[j] = '\0';
	return (r_value);
}
