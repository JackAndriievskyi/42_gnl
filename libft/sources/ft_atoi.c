/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 20:02:22 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/07 18:48:06 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispos(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (-1);
	return (0);
}

int			ft_atoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned long	res;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((sign = ft_ispos(str[i])))
		i++;
	else
		sign = 1;
	res = 0;
	while (ft_isdigit(str[i]))
		res = res * 10 + str[i++] - '0';
	if (res > LLONG_MAX)
	{
		if (sign == -1)
			return (0);
		else
			return (-1);
	}
	return ((int)res * sign);
}
