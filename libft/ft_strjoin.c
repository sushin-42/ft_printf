/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:16:06 by sushin            #+#    #+#             */
/*   Updated: 2020/11/20 20:42:25 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp;
	unsigned int	s1_len;
	unsigned int	s2_len;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(temp = (char *)malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(temp, s1, s1_len + s2_len + 1);
	ft_strlcat(temp, s2, s1_len + s2_len + 1);
	return (temp);
}
