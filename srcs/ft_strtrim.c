/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:19:37 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 16:28:45 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	char	*ends;
	char	*mem;

	if (s)
	{
		ends = (char*)s;
		while (*ends)
			ends++;
		ends--;
		while (ft_iswhitespace(*ends))
			ends--;
		while (ft_iswhitespace(*s))
			s++;
		if (!(res = ft_strnew(ends - s)))
			return (NULL);
		mem = res;
		while (s != ends)
			*mem++ = *s++;
		return (res);
	}
	return (NULL);
}
