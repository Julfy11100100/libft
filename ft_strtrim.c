/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:23:50 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 20:25:33 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*b;

	if (s)
	{
		len = ft_strlen(s);
		i = 0;
		j = len - 1;
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
			i++;
		if (i == len)
			b = ft_strnew(0);
		{
			while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
				j--;
			b = ft_strsub(s, i, j - i + 1);
		}
		if (b)
			return (b);
	}
	return (0);
}
