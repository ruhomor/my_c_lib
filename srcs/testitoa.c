/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:02:20 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 21:42:30 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	unsigned char	*d;

	d = (unsigned char*)b;
	a = (unsigned char)c;
	while (len--)
	{
		*d = a;
		d++;
	}
	return (b);
}

void	*ft_memalloc(size_t size)
{
	void *suka;
	if (!(suka = malloc(size)))
		return (NULL);
	suka = ft_memset(suka, '\0', size);
	return (suka);

}

char	*ft_strnew(size_t size)
{
	char	*cuckoo;

	if (!(cuckoo = (char*)ft_memalloc(size + 1)))
		return (NULL);
	return (cuckoo);
}

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
		*s = 0;
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

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("\nresult: %s\n", ft_itoa(atoi(argv[1])));
	return (0);
}
