/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:03:33 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/15 14:27:04 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_backwardsmemcpy(void *dst, const void *src, size_t n)
{
	unsigned char *bdst;
	unsigned char *bsrc;

	if (src || dst)
	{
		bdst = (unsigned char*)dst;
		bsrc = (unsigned char*)src;
		bdst += (n - 1);
		bsrc += (n - 1);
		while (n--)
		{
			*bdst = *bsrc;
			bdst--;
			bsrc--;
		}
		return (dst);
	}
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst || src)
	{
		if (dst <= src)
			return (ft_memcpy(dst, src, len));
		else
			return (ft_backwardsmemcpy(dst, src, len));
	}
	return (NULL);
}