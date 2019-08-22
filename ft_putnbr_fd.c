/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:48:36 by mmark             #+#    #+#             */
/*   Updated: 2019/04/21 19:54:52 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_getnbr(int nb, int *fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', *fd);
		ft_getnbr(214748364, fd);
		ft_putchar_fd('8', *fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', *fd);
		ft_getnbr(-nb, fd);
	}
	else if (nb > 9)
	{
		ft_getnbr(nb / 10, fd);
		ft_getnbr(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(((char)nb + 48), *fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int		*i;

	i = &fd;
	ft_getnbr(n, i);
}
