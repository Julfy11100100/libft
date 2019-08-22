/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:51:04 by mmark             #+#    #+#             */
/*   Updated: 2019/04/23 00:35:05 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t len;

	len = ft_strlen(s1);
	if (n >= ft_strlen(s2))
		ft_strcat(s1, s2);
	else
	{
		ft_strncpy(s1 + len, s2, n);
		s1[len + n] = '\0';
	}
	return (s1);
}
