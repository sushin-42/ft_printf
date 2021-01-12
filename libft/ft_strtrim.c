/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:49:09 by sushin            #+#    #+#             */
/*   Updated: 2020/11/24 01:57:00 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*temp;
	unsigned int	left;
	unsigned int	right;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(s1));
	left = 0;
	right = ft_strlen(s1);
	while (s1[left] != '\0' && ft_strchr(set, s1[left]))
		left++;
	while (right > 0 && ft_strchr(set, s1[right - 1]))
	{
		if (right - 1 < 1)
			break ;
		right--;
	}
	if (left > right)
		return (ft_strdup(""));
	if (!(temp = (char *)malloc(sizeof(char) * (right - left + 1))))
		return (0);
	ft_strlcpy(temp, s1 + left, right - left + 1);
	return (temp);
}
