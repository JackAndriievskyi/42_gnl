/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:53:19 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/07 18:37:33 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*n_str;
	size_t	n_size;
	size_t	i;

	n_str = NULL;
	n_size = ft_strlen(src) + 1;
	n_str = (char *)malloc(n_size * sizeof(*src));
	if (n_str == NULL)
		return (NULL);
	i = 0;
	while (i < n_size)
	{
		n_str[i] = src[i];
		i++;
	}
	return (n_str);
}
