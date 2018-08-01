/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:35:06 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/08 16:30:05 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				i;

	dp = (unsigned char *)dst;
	sp = (unsigned const char *)src;
	i = 0;
	while (n--)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dst);
}
