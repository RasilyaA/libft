/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:18:32 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/19 10:57:03 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	size_t			i;
	int				len1;

	i = 0;
	if (s == NULL)
		return (NULL);
	len1 = len;
	if (ft_strlen(s) - start < len)
		len1 = ft_strlen(s) - start;
	else if ((int)(ft_strlen(s) - start) < 0)
		len1 = 0;
	s1 = (char *) ft_calloc((len1 + 1), sizeof(char));
	if (s1 == NULL)
		return (NULL);
	if ((int)ft_strlen(s) >= (int)(start + len1))
	{
		ft_memcpy(s1, &s[start], len1);
	}
	return (s1);
}
