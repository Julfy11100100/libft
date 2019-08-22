/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:56:12 by mmark             #+#    #+#             */
/*   Updated: 2019/04/11 15:33:33 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	ind;
	size_t	count;
	size_t	i;
	char	*p;
	size_t	len;

	count = 0;
	ind = 0;
	i = 0;
	p = (char *)s;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (((char *)p)[i] == (char)c)
		{
			count++;
			ind = i;
		}
		i++;
	}
	if (count > 0)
		return (p + ind);
	return (0);
}
