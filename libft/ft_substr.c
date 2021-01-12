/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 17:55:55 by sushin            #+#    #+#             */
/*   Updated: 2020/11/25 15:15:05 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*temp;
	unsigned int	i;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(temp = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (len > i)
	{
		temp[i] = s[i + start];
		i++;
	}
	temp[len] = '\0';
	return (temp);
}
