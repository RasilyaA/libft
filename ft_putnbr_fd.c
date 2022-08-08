/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:54:06 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:28:54 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_check(long int n, int fd)
{
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	a;
	long int	l;
	long int	ln;

	l = 1;
	ln = n;
	ln = ft_check (ln, fd);
	a = ln / 10;
	while (a > 0)
	{
		a = a / 10;
		l = l * 10;
	}
	while (l != 0)
	{
		ft_putchar_fd(((char)(ln / l) + '0'), fd);
		ln = ln % l;
		l = l / 10;
	}
}
