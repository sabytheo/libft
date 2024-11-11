/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:03 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/11 11:00:46 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*dest;
	unsigned int		i;
	unsigned int		size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	while (i < size)
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <ctype.h>

char alternate_case(unsigned int i, char c) {
    if (i % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));


int main(void) {
    char *str = "Yo le rap";
    char *result;
    result = ft_strmapi(str, alternate_case);

    if (result) {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result);
    } else {
        printf("Erreur d'allocation de mémoire.\n");
    }
    return (0);
} */
