/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:51:06 by yandriie          #+#    #+#             */
/*   Updated: 2017/12/21 14:36:08 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	unsigned char	*res;
	size_t			n;

	n = 0;
	if (ptr)
		n = ft_strlen(ptr);
	if (!(res = (unsigned char *)ft_memalloc(sizeof(unsigned char) * size)))
		return (NULL);
	if (size >= n)
		ft_memmove(res, ptr, n);
	else
	{
		ft_memmove(res, ptr, size);
		res[size] = '\0';
	}
	if (ptr)
		free(ptr);
	return (res);
}
