/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:59:55 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 14:48:47 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				i;

	dp = (unsigned char *)dst;
	sp = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
		if (sp[i - 1] == (unsigned char)c)
			return (dp + i);
	}
	return (NULL);
}
