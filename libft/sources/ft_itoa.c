/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:24:28 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/10 17:18:24 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsize(int n)
{
	int			res;
	long int	num;

	num = (long int)n;
	res = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		res++;
		num *= (-1);
	}
	while (num != 0)
	{
		res++;
		num /= 10;
	}
	return (res);
}

static size_t	ft_dec(int i)
{
	int			ret;

	ret = 1;
	while (i--)
		ret *= 10;
	return (ret);
}

char			*ft_itoa(int n)
{
	long int	num;
	char		*buf;
	size_t		size;
	size_t		i;
	size_t		j;

	num = (long int)n;
	size = ft_getsize(num);
	buf = (char *)malloc(sizeof(char) * (size + 1));
	if (buf == NULL)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		buf[i++] = '-';
		num *= (-1);
	}
	while (i < size)
	{
		j = ft_dec(size - i - 1);
		buf[i] = ((num / j) % 10) + '0';
		i++;
	}
	buf[size] = '\0';
	return (buf);
}
