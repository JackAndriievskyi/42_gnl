/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 18:19:36 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 17:40:26 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t l;

	l = ft_strlen(dst);
	if (dstsize > l)
		ft_strncat(dst, src, (dstsize - l - 1));
	if (dstsize < l)
		return (dstsize + ft_strlen(src));
	return (l + ft_strlen(src));
}
