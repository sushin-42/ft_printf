/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:13:57 by sushin            #+#    #+#             */
/*   Updated: 2020/11/20 17:36:56 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	if (!(temp = (char *)malloc((s1_len + 1) * sizeof(char))))
		return (0);
	ft_memcpy(temp, s1, s1_len);
	temp[s1_len] = '\0';
	return (temp);
}
