/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:22:00 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:26:46 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*s1;

	if (n == 0)
		return (NULL);
	s1 = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n - 1 > 0)
	{
		if (*s1 == ch)
			return ((void *)s1);
		s1++;
		n--;
	}
	if (*s1 == ch)
		return ((void *)s1);
	return (NULL);
}
