/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:51:05 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/30 11:46:53 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	char	*res;

	ch = (char)c;
	i = -1;
	res = NULL;
	while (s[++i] != '\0')
		if (s[i] == ch)
		{
			res = (char *)&(s[i]);
			return (res);
		}
	if (s[i] == ch)
		res = (char *)&(s[i]);
	return (res);
}
