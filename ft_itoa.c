/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandrea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:11:03 by tandrea           #+#    #+#             */
/*   Updated: 2021/10/17 18:19:01 by tandrea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count_dig(long int n1)
{
	size_t	l;

	if (n1 <= 0)
	{
		l = 2;
		n1 = n1 * (-1);
	}
	else
		l = 1;
	while (n1 > 0)
	{
		n1 = n1 / 10;
		l++;
	}
	return (l);
}

long int	dec(long int n1)
{
	long int	a;
	long int	l;
	long int	ln;

	l = 1;
	ln = n1;
	a = ln / 10;
	while (a > 0)
	{
		a = a / 10;
		l = l * 10;
	}
	return (l);
}

char	*str(long int n1, int i, long int l, char *s)
{
	while (l != 0)
	{
		s[i] = ((char)(n1 / l) + '0');
		n1 = n1 % l;
		l = l / 10;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	int			i;
	long int	n1;
	long int	l;

	n1 = n;
	len = count_dig(n1);
	i = 0;
	s = (char *) malloc (len * sizeof (char));
	if (s == NULL)
		return (NULL);
	if (n1 < 0)
	{
		s[0] = '-';
		i = 1;
		n1 = -n1;
	}
	l = dec(n1);
	s = str(n1, i, l, s);
	return (s);
}
