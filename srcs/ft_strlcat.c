/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:02:20 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/15 20:24:53 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstsize;
	size_t cpysize;

	dstsize = 0;
	while (*dst)
	{
		size--;
		dst++;
		dstsize++;
	}
	cpysize = 0;
	while ((*src) && (size > 1))
	{
		*dst = *src++;
		dst++;
		cpysize++;
		size--;
	}
	*dst = '\0';
	return (dstsize + cpysize);
}
