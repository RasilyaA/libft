/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:05:00 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:27:47 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (!dst && !src)
		return (dst);
	if (dst <= src)
	{
		while (len--)
			*dst1++ = *src1++;
	}
	else
	{
		while (len--)
			dst1[len] = src1[len];
	}
	return (dst);
}
