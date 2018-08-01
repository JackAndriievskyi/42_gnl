/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:11:47 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 16:20:11 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	k;

	if (s == NULL)
		return (NULL);
	new = ft_strnew(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	k = (size_t)start;
	while (i < len)
	{
		new[i] = s[i + k];
		i++;
	}
	return (new);
}
