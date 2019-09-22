/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:19:37 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 19:12:42 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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
	printf("\nAllocSize: %d\n", size + 1);
	return (cuckoo);
}


int		ft_iswhitespace(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*ends;
	char	*res;
	char	*mem;

	if (!(s))
		return (NULL);
	ends = (char*)s;
	while (*ends)
		ends++;
	ends--;
	while ((ends != s) && (ft_iswhitespace(*ends)))
		ends--;
	if ((ends == s) || (*s == '\0'))
	{
		if (!(res = ft_strnew(0)))
			return (NULL);
		*res = '\0';
		return (res);
	}
	while (ft_iswhitespace(*s))
		s++;
	printf("\ns: %d\nends: %d\n", s, ends);
	if (!(res = ft_strnew(ends - s + 1)))
		return (NULL);
	mem = res;
	while (s != ends)
		*mem++ = *s++;
	*mem++ = *ends;
	*mem = '\0';
	return (res);
}

int		main(int	argc, char	**argv)
{
	if (argc == 2)
		printf("\nTrim?: :%s:\n", ft_strtrim(argv[1]));
	return (0);
}
