/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:28:24 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:28:06 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*ch;
	size_t			i;
	unsigned char	c1;

	c1 = (unsigned char) c;
	ch = (char *)b;
	i = 0;
	while (i < len)
	{
		ch[i] = c1;
		i++;
	}
	return (b);
}
