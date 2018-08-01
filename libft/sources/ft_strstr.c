/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 17:05:43 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/07 16:02:42 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hst, const char *ndl)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
		return ((char *)hst);
	i = 0;
	while (hst[i] != '\0')
	{
		j = 0;
		while (ndl[j] != '\0' && hst[i + j] == ndl[j])
			j++;
		if (ndl[j] == '\0')
			return ((char *)(hst + i));
		i++;
	}
	return (NULL);
}
