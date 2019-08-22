/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:57:54 by mmark             #+#    #+#             */
/*   Updated: 2019/04/08 17:27:05 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *p;

	p = (char*)s;
	while (n--)
	{
		if ((unsigned char)*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (0);
}
