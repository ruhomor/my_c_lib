/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:43:22 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/23 16:49:52 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	t_list	*meme;

	meme = *alst;
	if (alst && *alst)
	{
		(*del)(meme->content, meme->content_size);
		meme = meme->next;
		free(*alst);
		*alst = meme;
	}
}
