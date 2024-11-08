/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:06:07 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/08 14:20:48 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *cdest;
    const char *csrc;

    i = 0 ;
    cdest = (char *)dest;
    csrc = (const char *)src;

    while (i < n && cdest[i] != '\0' && csrc[i] != '\0')
    {
        cdest[i] = csrc[i];
        i++;
    }
    return (dest);
}
