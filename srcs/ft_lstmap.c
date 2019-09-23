/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:27:58 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/23 18:57:49 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list* (*f)(t_list *elem))
{
	t_list	*mememap;
	t_list	*buf_lst;
	t_list	*buf_meme;

	if (lst && f)
	{
		buf_lst = (*f)(lst);
		if (!(mememap = ft_lstnew(buf_lst->content, buf_lst->content_size)))
			return (NULL);
		buf_meme = mememap;
		while (lst->next)
		{
			buf_lst = (*f)(lst->next);
			if(!(buf_meme->next = ft_lstnew(buf_lst->content, buf_lst->content_size)))
				return (NULL);
			lst = lst->next;
			buf_meme = buf_meme->next;
		}
		return (mememap);
	}
	return (NULL);
}
