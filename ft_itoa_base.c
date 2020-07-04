/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <sslift@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 19:12:54 by sslift            #+#    #+#             */
/*   Updated: 2020/07/04 19:30:43 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennb(unsigned int nb, int base)
{
	int len;

	len = 0;
	if (nb == 0)
		return (len);
	while (nb != 0)
	{
		nb = nb / base;
		len++;
	}
	return (len);
}

char		*ft_itoa_base(unsigned int nb, int base)
{
	char	*str;
	int		len;
	int		i;

	len = ft_lennb(nb, base);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (nb == 0)
		*str = '0';
	i = len - 1;
	while ((i >= 0) && (nb != 0))
	{
		*(str + i) = '0' + (nb % base);
		nb /= base;
		i--;
	}
	*(str + len) = '\0';
	return (str);
}