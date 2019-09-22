/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:15:10 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 20:01:50 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char delim)
{
	short int	isword;
	size_t		words;

	words = 0;
	isword = 0;
	while (*s)
	{
		if ((*s != delim) && (isword == 0))
		{
			isword = 1;
			words++;
		}
		if (*s == delim)
			isword = 0;
		s++;
	}
	return (words);
}

size_t	ft_sstrlen(char const *s, char delim)
{
	char *b;

	b = (char*)s;
	while (*b && (*b != delim))
		b++;
	return ((size_t)(b - s));
}

char	**ft_strsplit(char const *s, char c)
{
	char		**res;
	char		**buf;
	size_t		words;
	short int	isword;

	if (s)
	{
		words = ft_countwords(s, c);
		if (!(res = (char**)malloc(sizeof(*res) * (words + 1))))
			return (NULL);
		res[words] = NULL;
		buf = res;
		isword = 0;
		while (*s)
		{
			if ((*s != c) && (isword == 0))
			{
				isword = 1;
				if (!(*res = ft_strsub(s, 0, ft_sstrlen(s, c))))
					return (NULL);
				res++;
			}
			if (*s == c)
				isword = 0;
			s++;
		}
		return (buf);
	}
	return (NULL);
}
