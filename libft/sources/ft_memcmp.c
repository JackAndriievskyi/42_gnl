/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:24:59 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/08 16:37:34 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*sp1;
	unsigned const char	*sp2;

	sp1 = (unsigned const char *)s1;
	sp2 = (unsigned const char *)s2;
	while (n--)
	{
		if (*sp1 == *sp2)
		{
			sp1++;
			sp2++;
		}
		else
			return (*sp1 - *sp2);
	}
	return (0);
}
