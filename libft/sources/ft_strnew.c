/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 14:59:02 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/07 18:43:18 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	new = (char *)malloc((size + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
		new[i++] = 0;
	return (new);
}
