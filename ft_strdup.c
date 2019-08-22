/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:09:25 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 16:00:20 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	len;

	len = ft_strlen(s1) + 1;
	buf = (char*)malloc(sizeof(char) * len);
	if (buf != 0)
		return (ft_memcpy(buf, s1, len));
	else
		free(buf);
	return (0);
}
