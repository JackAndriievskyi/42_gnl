/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 14:30:16 by yandriie          #+#    #+#             */
/*   Updated: 2017/12/11 12:54:01 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		ptr[i++] = 0;
	return ((void *)ptr);
}
