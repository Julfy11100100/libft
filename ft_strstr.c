/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:34:42 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 20:40:19 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = (-1);
	p = (char*)haystack;
	if (ft_strlen(needle) == 0)
		return (p);
	while (++i < ft_strlen(haystack))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (j < ft_strlen(needle) && i < ft_strlen(haystack) &&
					haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return (p + i - j);
			i = i - j;
		}
	}
	return (0);
}
