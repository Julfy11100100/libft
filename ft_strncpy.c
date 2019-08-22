/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:36:32 by mmark             #+#    #+#             */
/*   Updated: 2019/04/09 15:13:24 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t len_s;

	len_s = ft_strlen(src);
	if (len_s >= len)
		return (ft_memcpy(dst, src, len));
	else
	{
		ft_memcpy(dst, src, len_s);
		ft_memset(dst + len_s, 0, len - len_s);
		return (dst);
	}
}
