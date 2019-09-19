/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:04:29 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/19 22:15:06 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c == '0') || (c == '1') || (c == '2') || (c == '3') || (c == '4') 
			|| (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("atoi: %d\nmy_atoi: %d\n", atoi(argv[1]), ft_atoi(argv[1]));
	}
	return (0);
}

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
	short int	longoverflow;
	long int	res;

	longoverflow = 0;
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
		if (((sign == 1) && (res < 0)) || ((sign == -1) && (res > 0)))
			longoverflow = 1;
	}
	if (longoverflow)
	{
		if (sign == 1)
			return (0);
		else
			return (-1);
	}
	return ((int)(res * sign));
}
