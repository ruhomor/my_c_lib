/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachiote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:36:36 by kachiote          #+#    #+#             */
/*   Updated: 2019/09/17 21:52:15 by kachiote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp(const char *hs, const char *n)
{
	while ((*n) && (*hs == *n))
	{
		hs++;
		n++;
	}
	if (*n == '\0')
		return (1);
	return (0);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return (0);
	while (*haystack)
	{
		if (*needle == *haystack)
			if (ft_cmp(haystack, needle))
				return ((char*)haystack);
		haystack++;
	}
	return (0);
}
