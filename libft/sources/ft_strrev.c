/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:05:05 by yandriie          #+#    #+#             */
/*   Updated: 2017/11/10 13:31:16 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char const *src)
{
	size_t	i;
	size_t	size;
	char	*rev;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src);
	rev = (char *)malloc(sizeof(char) * (size + 1));
	if (rev == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		rev[size - i - 1] = src[i];
		i++;
	}
	rev[size] = '\0';
	return (rev);
}
