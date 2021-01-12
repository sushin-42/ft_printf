/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:54:12 by sushin            #+#    #+#             */
/*   Updated: 2020/11/23 22:18:36 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	if (c == 0)
		return ((char*)&s[s_len]);
	while (s_len > 0)
	{
		if (s[s_len - 1] == c)
			return ((char *)&s[s_len - 1]);
		s_len = s_len - 1;
	}
	return (0);
}
