/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoibase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:43:52 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/10 18:27:32 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_genbase(unsigned int base)
{
	char	*res;
	size_t	i;

	if (base < 2 || base > 36)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (base + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < base)
	{
		if (i < 10)
			res[i] = '0' + i;
		else
			res[i] = 'a' + i - 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}

static int		ft_ispos(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (-1);
	return (0);
}

static size_t	ft_fnum(char const *str, unsigned int base, int *s)
{
	size_t	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if ((*s = ft_ispos(str[i])))
		i++;
	else
		*s = 1;
	if (base == 16 && str[i] == '0')
	{
		i++;
		if (str[i] == 'x' || str[i] == 'X')
			i++;
		else
			i--;
	}
	return (i);
}

static int		ft_digitbase(char c, char const *b_chrs)
{
	size_t	i;

	i = 0;
	while (b_chrs[i] != '\0')
	{
		if (b_chrs[i] == c)
			return ((int)i);
		i++;
	}
	return (-1);
}

int				ft_atoibase(char const *str, unsigned int base)
{
	unsigned long	res;
	size_t			i;
	int				sign;
	char			*b_chrs;
	char			dig;

	b_chrs = ft_genbase(base);
	if (b_chrs == NULL)
		return (-1);
	i = ft_fnum(str, base, &sign);
	res = 0;
	dig = ft_tolower(str[i]);
	while (ft_digitbase(dig, b_chrs) + 1)
	{
		res = res * base + ft_digitbase(dig, b_chrs);
		dig = ft_tolower(str[++i]);
	}
	free(b_chrs);
	if (res > LLONG_MAX)
		if (sign == 1)
			return (-1);
	return ((int)res * sign);
}
