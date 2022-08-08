/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:49:06 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:32:55 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		l1;
	size_t		l2;
	char		*s3;
	char		*buf;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l1 = ft_strlen (s1);
	l2 = ft_strlen (s2);
	s3 = (char *) malloc ((l1 + l2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	buf = s3;
	if (s1 && s2)
	{
		while (*s1)
			*s3++ = *s1++;
		while (*s2)
			*s3++ = *s2++;
	}
	*s3 = '\0';
	return (buf);
}
