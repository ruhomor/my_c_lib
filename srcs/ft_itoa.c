/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:02:20 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/23 14:49:14 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_reqsize(int n)
{
	int res;

	if (n == 0)
		return (1);
	res = 0;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

void	ft_writenbr(char *s, unsigned int n, int size)
{
	char *buf;

	if (n == 0)
		*s = '0';
	buf = s + size - 1;
	while (n)
	{
		*buf = (n % 10) + '0';
		n /= 10;
		buf--;
	}
}

char	*ft_itoa(int n)
{
	int				rsize;
	unsigned int	un;
	short int		sign;
	char			*res;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		un = -n;
	}
	else
		un = n;
	rsize = ft_reqsize(n) + sign;
	if (!(res = ft_strnew(rsize)))
		return (NULL);
	res[rsize] = '\0';
	if (sign == 1)
		*res = '-';
	ft_writenbr(res, un, rsize);
	return (res);
}
