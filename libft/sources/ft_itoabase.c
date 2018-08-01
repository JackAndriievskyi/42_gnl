/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:12:56 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/10 18:39:34 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_genbase(unsigned int base)
{
	char		*res;
	size_t		i;

	if (base < 2 || base > 36)
		return (NULL);
	res = (char*)malloc(sizeof(char) * (base + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < base)
	{
		if (i < 10)
			res[i] = '0' + i;
		else
			res[i] = 'A' + i - 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char		*ft_tmpres(size_t size, long int n, char const *b_chrs,
						unsigned int base)
{
	size_t		i;
	char		*res;
	int			sign;

	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	sign = 0;
	if (n < 0)
	{
		n *= (-1);
		sign = 1;
	}
	while (i < size)
	{
		res[i] = b_chrs[n % base];
		n /= base;
		i++;
	}
	if (sign == 1)
		res[size - 1] = '-';
	res[size] = '\0';
	return (res);
}

static size_t	ft_getsize(int n, unsigned int base)
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
		num /= base;
	}
	return (res);
}

char			*ft_itoabase(int n, unsigned int base)
{
	char		*b_chrs;
	char		*res;
	char		*tmp;
	size_t		size;

	b_chrs = ft_genbase(base);
	if (b_chrs == NULL)
		return (NULL);
	size = ft_getsize(n, base);
	tmp = ft_tmpres(size, (long int)n, b_chrs, base);
	free(b_chrs);
	if (tmp == NULL)
		return (NULL);
	res = ft_strrev(tmp);
	free(tmp);
	return (res);
}
