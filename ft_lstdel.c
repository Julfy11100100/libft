/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 15:17:19 by mmark             #+#    #+#             */
/*   Updated: 2019/04/30 01:31:13 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*prev;

	while (alst && *alst && del)
	{
		(del)((*alst)->content, (*alst)->content_size);
		prev = *alst;
		*alst = (*alst)->next;
		free(prev);
	}
}
