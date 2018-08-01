/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:23:18 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/09 16:17:29 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	n_size;
	size_t	i;
	char	*new;

	if (!s || !f)
		return (NULL);
	new = NULL;
	n_size = ft_strlen(s);
	new = (char *)malloc((n_size + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < n_size)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
