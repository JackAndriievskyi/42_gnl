/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 17:23:07 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/07 16:55:18 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
		return ((char *)hst);
	i = 0;
	while (hst[i] != '\0' && i != len)
	{
		j = 0;
		while (ndl[j] != '\0' && (i + j) != len && ndl[j] == hst[i + j])
			j++;
		if (ndl[j] == '\0')
			return ((char *)(hst + i));
		i++;
	}
	return (NULL);
}
