/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:35:03 by sushin            #+#    #+#             */
/*   Updated: 2020/11/20 16:52:15 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_1;

	b_1 = b;
	while (len > 0)
	{
		*b_1 = c;
		len--;
		b_1++;
	}
	return (b);
}