/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:05:41 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:32:12 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*rs;

	rs = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (rs);
}

char	*ft_strdup(const char *src)
{
	int		l;
	char	*p;
	char	*src1;

	l = ft_strlen(src) + 1;
	src1 = (char *)src;
	p = malloc(l * sizeof(char));
	if (p == (void *)0)
		return (p);
	if (p)
	{
		ft_strcpy (p, src1);
		return (p);
	}
	else
		return ((void *)0);
}
