/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:04:29 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/19 22:01:59 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f')
	   	|| (c == '\r') || (c == ' '))
			return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	short int	sign;
	long int	res;

	res = 0;
	sign = -1;
	while ((*str) && ((ft_isspace(*str))) && (*str != '-') && (*str != '+'))
		str++;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	if (*str == '+')
	{
		sign = -1;
		str++;
	}
	while ((*str) && ft_isdigit(*str))
	{
		res = res * 10 - (*str - '0');
		str++;
	}
	return ((int)(res * sign));
}
