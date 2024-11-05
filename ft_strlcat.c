/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:16 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/05 17:39:02 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (dest[j] && j < size)
        j++;
    while (src[i] && ((i + j + 1) < size))
    {
        dest[j + i] = src[i];
        i++;
    }
    if (j =! size)
        dest[i + j] = '\0';
    return (dest[j] + ft_strlen(src));
}