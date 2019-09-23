/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:28:08 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/23 16:28:18 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*root;

	if (!(root = (t_list*)malloc(sizeof(*root))))
		return (NULL);
	if (content && content_size)
	{
		if (!(root->content = (void*)malloc(sizeof(content_size))))
			return (NULL);
		root->content = ft_memcpy(root->content, content, content_size);
		root->content_size = content_size;
	}
	else
	{
		root->content = NULL;
		root->content_size = 0;
	}
	return (root);
}
