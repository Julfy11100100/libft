/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 22:32:59 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 23:16:35 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lst_size(t_list *begin_list)
{
	t_list	*new;
	int		count;

	new = begin_list;
	if (new == NULL)
		return (0);
	else
	{
		count = 0;
		while (new)
		{
			new = new->next;
			count++;
		}
		return (count);
	}
}
