/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 00:10:48 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:09:56 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (s)
	{
		p = (char *)malloc(sizeof(char) * len + 1);
		if (p)
		{
			i = 0;
			while (i < len)
			{
				p[i] = s[start + i];
				i++;
			}
			p[i] = '\0';
			if (p)
				return (p);
		}
	}
	return (0);
}
