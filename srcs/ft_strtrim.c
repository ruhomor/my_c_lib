/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:19:37 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/22 17:50:52 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (!(s))
		return (NULL);
	ends = (char*)s;
	while (*ends)
		ends++;
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
	if (!(res = ft_strnew(s - ends + 1)))
		return (NULL);
	while (s != ends)
		*res++ = *s++;
	return ();
}
