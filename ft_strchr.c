/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:45:18 by mmark             #+#    #+#             */
/*   Updated: 2019/04/11 14:55:34 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *p;

	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (*p == (char)c)
		return (p);
	return (0);
}
