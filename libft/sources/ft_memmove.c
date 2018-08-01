/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:10:09 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 16:03:28 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dp;
	unsigned char	*sp;

	dp = (unsigned char *)dst;
	sp = (unsigned char *)src;
	if (src >= dst)
		while (len--)
			*dp++ = *sp++;
	else
	{
		dp = dp + len - 1;
		sp = sp + len - 1;
		while (len--)
			*dp-- = *sp--;
	}
	return (dst);
}
