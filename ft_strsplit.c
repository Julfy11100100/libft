/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:17:18 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:02:15 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static size_t	ft_len(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void		ft_free_strbuf(char **buf, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_strdel(buf + i);
		i++;
	}
	free(buf);
	buf = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	ind;
	size_t	i;
	size_t	words;
	char	**buf;

	if (!s || !c)
		return (0);
	words = ft_words(s, c);
	ind = 0;
	i = 0;
	if (!(buf = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (ind < (words))
	{
		while (s[i] == c)
			i++;
		if (!(buf[ind] = ft_strsub(s, i, ft_len(s, c, i))))
		{
			ft_free_strbuf(buf, ind);
			return (NULL);
		}
		i = i + ft_len(s, c, i);
		ind++;
	}
	return (buf);
}
