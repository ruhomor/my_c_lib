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

char *ft_strstr(const char *haystack, const char *needle)
{
	char *pepis;
	char *vag;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			pepis = (char*)needle;
			vag = (char*)haystack;
			while (*pepis == *vag)
			{
				pepis++;
				vag++;
				if (*pepis == '\0')
					return (vag);
			}
		}
		haystack++;
	}
	return (0);
}
