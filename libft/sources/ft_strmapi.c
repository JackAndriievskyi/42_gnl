/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:36:24 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/15 14:53:55 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			n_size;
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	n_size = ft_strlen(s);
	new = (char *)malloc((n_size + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned int)n_size)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
