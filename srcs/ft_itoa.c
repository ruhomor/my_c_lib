/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:02:20 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 20:37:10 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_reqsize(int n)
{
	int res;

	if (n == 0)
		return (1);
	res = 0;
	if (n > 0)
		n = -n;
	else
		res++;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res)
}

char	*ft_itoa(int n)
{
	char	*res;
	char	*buf;
	int		sign;

	sign = 0;
	if (!(res = ft_strnew(ft_reqsize(n))))
		return (NULL);
	if (n < 0)
	{
		*res = '-';
		sign = 1;
	}
	while (*buf)
		buf++;
	buf--;
	while (buf != (res + sign))
	{
		*buf-- = n % 10;
		n /= 10;
	}
	*buf = n % 10;
	return (res);
}
