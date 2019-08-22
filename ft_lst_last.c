/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 22:38:10 by mmark             #+#    #+#             */
/*   Updated: 2019/04/24 23:17:12 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_last(t_list *begin_list)
{
	t_list *new;

	new = begin_list;
	if (new == NULL)
		return (0);
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		return (new);
	}
}
