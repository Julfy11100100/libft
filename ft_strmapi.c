/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:14:10 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:09:27 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*buf;

	if (s && f)
	{
		buf = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (buf)
		{
			i = 0;
			while (s[i] != '\0')
			{
				buf[i] = (f)(i, s[i]);
				i++;
			}
			buf[i] = '\0';
			return (buf);
		}
	}
	return (0);
}
