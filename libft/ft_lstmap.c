/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sushin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:09:35 by sushin            #+#    #+#             */
/*   Updated: 2020/11/26 21:34:52 by sushin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_head;
	t_list	*next_head;
	t_list	*next_next;

	if (!lst)
		return (NULL);
	if (!(new_list_head = ft_lstnew((*f)(lst->content))))
		return (NULL);
	next_head = new_list_head;
	next_next = lst->next;
	while (1)
	{
		if (!next_next)
			break ;
		if (!(next_head->next = ft_lstnew((*f)(next_next->content))))
		{
			ft_lstclear(&new_list_head, del);
			return (NULL);
		}
		next_head = next_head->next;
		next_next = next_next->next;
	}
	return (new_list_head);
}
