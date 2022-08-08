/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:29:02 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:23:45 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (del && *lst && lst)
	{
		while (lst != NULL && *lst)
		{
			p = (*lst)-> next;
			(*del)((*lst)->content);
			free ((*lst));
			*lst = p;
		}
	}
}
