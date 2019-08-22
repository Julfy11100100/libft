/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:25:49 by mmark             #+#    #+#             */
/*   Updated: 2019/04/18 21:34:48 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	buf;

	i = 0;
	j = 0;
	buf = size;
	while (((unsigned char*)dst)[i] != '\0' && buf-- != 0)
		i++;
	len_d = i;
	buf = size - i;
	if (buf == 0)
		return (ft_strlen(src) + len_d);
	while (((unsigned char *)src)[j] != '\0')
	{
		if (buf != 1)
		{
			((unsigned char*)dst)[i++] = ((unsigned char*)src)[j];
			buf--;
		}
		j++;
	}
	((unsigned char *)dst)[i] = '\0';
	return (len_d + j);
}
