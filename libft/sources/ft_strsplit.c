/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:10:22 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 16:42:15 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	int		isword;
	size_t	count;

	isword = 0;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (!isword)
		{
			if (s[i] != c)
			{
				count++;
				isword++;
			}
		}
		else
		{
			if (s[i] == c)
				isword--;
		}
		i++;
	}
	return (count);
}

static size_t	ft_wordsize(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 1;
	while (s[i] != c && s[i] != '\0')
	{
		words++;
		i++;
	}
	return (words);
}

static void		ft_nullify(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
		free(s[i++]);
	free(s);
	return ;
}

static size_t	ft_wordcpy(char *dst, char const *s, size_t i, char c)
{
	size_t	j;

	while (s[i] == c)
		i++;
	j = 0;
	while (s[i] != c && s[i] != '\0')
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	tmp;
	size_t	size;

	if (s == NULL)
		return (NULL);
	res = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	tmp = 0;
	while (i < ft_countwords(s, c))
	{
		size = ft_wordsize(s, c);
		res[i] = (char *)malloc((size + 1) * sizeof(char));
		if (res[i] == NULL)
		{
			ft_nullify(res);
			return (NULL);
		}
		tmp = ft_wordcpy(res[i++], s, tmp, c);
	}
	res[i] = NULL;
	return (res);
}
