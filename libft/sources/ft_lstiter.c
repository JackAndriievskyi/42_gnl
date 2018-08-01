/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:08:10 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/15 14:52:49 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lnk;

	if (!lst || !f)
		return ;
	lnk = lst;
	while (lnk != NULL)
	{
		f(lnk);
		lnk = lnk->next;
	}
	return ;
}
