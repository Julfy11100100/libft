/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:05:17 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:10:32 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*buf;

	if (!s1 || !s2)
		return (0);
	if (!(buf = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (0);
	i = (-1);
	while (s1[++i] != '\0')
		buf[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
	{
		buf[i] = s2[j];
		j++;
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
