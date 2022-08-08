/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:00:46 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:39:29 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*z1;
	unsigned char	*z2;

	z1 = (unsigned char *)s1;
	z2 = (unsigned char *)s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (z1[i] != z2[i])
			return (z1[i] - z2[i]);
		if (z1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
