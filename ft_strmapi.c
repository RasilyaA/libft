/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:55:17 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:39:16 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long		i;
	unsigned long		l;
	char				*s1;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	s1 = ft_strdup((char *)s);
	if (s1)
	{
		i = 0;
		while (i < l)
		{
			s1[i] = (*f)(i, s1[i]);
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
