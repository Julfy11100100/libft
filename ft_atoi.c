/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:37:32 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 22:25:55 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_rez(long long buf, int flag)
{
	if (buf != (buf * 10 / 10) && flag == 1)
		return (-1);
	if (buf != (buf * 10 / 10) && flag == (-1))
		return (0);
	return (buf * flag);
}

int				ft_atoi(const char *str)
{
	long long	buf;
	size_t		i;
	int			flag;

	buf = 0;
	i = 0;
	flag = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		flag = (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		buf = buf * 10 + str[i] - '0';
		i++;
	}
	return (ft_get_rez(buf, flag));
}
