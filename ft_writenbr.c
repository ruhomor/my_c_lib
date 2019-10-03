/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:31:13 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/24 13:33:04 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_writenbr(char *s, unsigned int n, int size)
{
	char *buf;

	if (n == 0)
		*s = '0';
	buf = s + size - 1;
	while (n)
	{
		*buf = (n % 10) + '0';
		n /= 10;
		buf--;
	}
}