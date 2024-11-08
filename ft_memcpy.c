/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:06:07 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/08 10:22:44 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *cdest;
    const char *csrc;

    i = 0 ;
    ccdest = (char *)dest;
    csrc = (const char *)src;

    while (i < n && dest[i] && src[i])
    {
        cdest[i] = csrc[i];
        i++;
    }
    return (dest);
}
