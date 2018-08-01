/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:51:05 by yandriie          #+#    #+#             */
/*   Updated: 2017/10/30 11:44:48 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	char	*res;

	ch = (char)c;
	i = -1;
	res = NULL;
	while (s[++i] != '\0')
		if (s[i] == ch)
			res = (char *)&(s[i]);
	if (s[i] == ch)
		res = (char *)&(s[i]);
	return (res);
}
