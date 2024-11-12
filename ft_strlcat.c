/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:16 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 13:43:22 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] && j < size)
		j++;
	while (src[i] && ((i + j + 1) < size))
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j != size)
		dest[i + j] = '\0';
	return (dest[j] + ft_strlen(src));
}
