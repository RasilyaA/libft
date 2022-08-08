/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:20:35 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/19 12:16:29 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*r;

	if (!lst)
		return (NULL);
	l = ft_lstnew((*f)(lst -> content));
	if (!l)
		return (NULL);
	r = l;
	lst = lst -> next;
	while (lst)
	{
		l -> next = ft_lstnew((*f)(lst -> content));
		if (!l)
		{
			ft_lstclear(&r, (*del));
			return (NULL);
		}
		l = l -> next;
		lst = lst -> next;
	}
	return (r);
}
