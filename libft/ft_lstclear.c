/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:59:49 by sushin            #+#    #+#             */
/*   Updated: 2020/11/26 19:44:34 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_temp;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		next_temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_temp;
	}
	return ;
}
