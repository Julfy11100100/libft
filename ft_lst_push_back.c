/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 21:38:11 by mmark             #+#    #+#             */
/*   Updated: 2019/04/30 01:39:46 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_list **begin_list, t_list *lst)
{
	t_list	*new;

	new = *begin_list;
	if (lst)
	{
		if (new == NULL)
			*begin_list = lst;
		else
		{
			while (new->next != NULL)
			{
				new = new->next;
			}
			new->next = lst;
		}
	}
}
