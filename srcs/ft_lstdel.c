/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:51:16 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/23 16:59:33 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
	t_list	*meme;

	meme = *alst;
	while (meme)
	{
		ft_lstdelone(alst, del);
		meme = *alst;
	}
}
