/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islowercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 21:12:17 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/24 13:15:59 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islowercase(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}