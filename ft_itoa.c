/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 00:43:50 by mmark             #+#    #+#             */
/*   Updated: 2019/04/25 17:11:40 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_getnbr(int nb, char *str, size_t *i)
{
	if (nb == -2147483648)
	{
		str[*i] = '-';
		*i = *i + 1;
		ft_getnbr(214748364, str, i);
		str[*i] = '8';
		*i = *i + 1;
	}
	else if (nb < 0)
	{
		str[*i] = '-';
		*i = *i + 1;
		ft_getnbr(-nb, str, i);
	}
	else if (nb > 9)
	{
		ft_getnbr(nb / 10, str, i);
		ft_getnbr(nb % 10, str, i);
	}
	else
	{
		str[*i] = (char)nb + 48;
		*i = *i + 1;
	}
}

static int		ft_bit_depth(int n)
{
	int	d;
	int i;

	d = n;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		d = d * (-1);
		i = 1;
	}
	while (d > 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*buf;
	size_t	*i;
	size_t	ind;

	i = &ind;
	ind = 0;
	buf = (char *)malloc(sizeof(char) * ft_bit_depth(n) + 1);
	if (buf)
	{
		ft_getnbr(n, buf, i);
		buf[ind] = '\0';
		return (buf);
	}
	return (0);
}
