/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 21:08:17 by sushin            #+#    #+#             */
/*   Updated: 2020/11/25 15:09:59 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}

static size_t	ft_s_row(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (i == 0)
		return (count);
	else if (s[i - 1] != c)
		count++;
	return (count);
}

static size_t	ft_column_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**temp;
	size_t	column_len;
	size_t	row_count;
	size_t	i;

	if (s == 0)
		return (0);
	row_count = ft_s_row(s, c);
	if (!(temp = (char **)malloc(sizeof(char *) * (row_count + 1))))
		return (0);
	i = 0;
	while (i < row_count)
	{
		while (*s && *s == c)
			s++;
		column_len = ft_column_len(s, c);
		if (!(temp[i] = (char *)malloc(sizeof(char) * (column_len + 1))))
			return (ft_free(temp));
		ft_strlcpy(temp[i], s, column_len + 1);
		i++;
		if (i < row_count)
			s = s + column_len;
	}
	temp[i] = (0);
	return (temp);
}
