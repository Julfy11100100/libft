/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 18:20:28 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:08:34 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *p;

	p = (char *)malloc(sizeof(char) * size + 1);
	if (p)
	{
		ft_bzero(p, size + 1);
		p[size + 1] = '\0';
		return (p);
	}
	return (NULL);
}
