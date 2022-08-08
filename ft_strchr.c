/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:46:35 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:40:05 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*s1;

	ch = (unsigned char) c;
	s1 = (unsigned char *)s;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == ch)
			return ((char *)s1 + i);
		i++;
	}
	if (s1[i] == ch)
		return ((char *) s1 + i);
	return (NULL);
}
