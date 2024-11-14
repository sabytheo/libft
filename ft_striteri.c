/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:36 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/14 13:56:39 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <ctype.h>
#include <stdio.h>

void	to_alternate_case(unsigned int i, char *c)
{
	if (c && *c)
	{
		if (i % 2 == 0)
			*c = toupper(*c); // Majuscule si l'index est pair
		else
			*c = tolower(*c); // Minuscule si l'index est impair
	}
}

int	main(void)
{
	char	str[] = "Hello, coucou ca va ?";

	printf("Avant ft_striteri : %s\n", str);
	ft_striteri(str, to_alternate_case);
	printf("Après ft_striteri : %s\n", str);
	return (0);
}
*/
