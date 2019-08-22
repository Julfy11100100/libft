/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:32:17 by mmark             #+#    #+#             */
/*   Updated: 2019/04/30 01:57:56 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*buf;
	t_list	*begin;

	if (lst && f)
	{
		begin = ft_lstnew(lst->content, lst->content_size);
		begin = (*f)(begin);
		lst = lst->next;
		while (lst)
		{
			if (!(buf = ft_lstnew(lst->content, lst->content_size)))
			{
				ft_lstdel(&begin, &ft_lst_fdel);
				return (NULL);
			}
			buf = (*f)(buf);
			ft_lst_push_back(&begin, buf);
			lst = lst->next;
		}
		return (begin);
	}
	return (NULL);
}
