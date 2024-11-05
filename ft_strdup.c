/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:21 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/05 17:10:13 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dest;
    size_t    i;
    int    srclen;

    srclen = ft_strlen(src);
    i = 0;
    dest = (char *)malloc(srclen * sizeof(char));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (&dest[0]);
}