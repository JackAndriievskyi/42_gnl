/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:13:05 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 17:45:23 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*move;

	if (!f || !lst)
		return (NULL);
	res = f(lst);
	move = res;
	while (lst->next != NULL)
	{
		move->next = f(lst->next);
		move = move->next;
		lst = lst->next;
	}
	return (res);
}
