/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:45:48 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/17 20:56:40 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	char a;

	a = (char)c;
	while (*s)
	{
		if (*s == a)
			return ((char*)s);
		s++;
	}
	if (a == *s)
		return ((char*)s);
	return (0);
}
