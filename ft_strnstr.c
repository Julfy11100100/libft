/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:12:20 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 20:41:07 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = (-1);
	p = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (p);
	while (++i < ft_strlen(haystack) && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < ft_strlen(needle) && i < ft_strlen(haystack) &&
					haystack[i] == needle[j] && i < len)
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
