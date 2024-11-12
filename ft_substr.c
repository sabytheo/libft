/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:31:39 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 13:43:08 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while ((unsigned char)s[i] && i != start)
		i++;
	if (len > ft_strlen(s) - i)
		len = ft_strlen(s) - i;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	j = 0;
	while (j < len)
	{
		new[j] = s[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
	char    *str = "Hello, world!";
	char    *substr;

	// Test 1: Extraire "Hello"
	substr = ft_substr(str, 0, 5);
	if (substr)
	{
		printf("Sous-chaîne extraite : %s\n", substr); 
			// Devrait afficher "Hello"
		free(substr);  // Libération de la mémoire
	}

	// Test 2: Extraire ", world"
	substr = ft_substr(str, 5, 7);
	if (substr)
	{
		printf("Sous-chaîne extraite : %s\n", substr);  // Devrait afficher ",
			world"
		free(substr);
	}

	// Test 3: Demander une sous-chaîne trop longue (au-delà de la fin de la chaîne)
	substr = ft_substr(str, 7, 100); 
		// La longueur est plus grande que la longueur restante
	if (substr)
	{
		printf("Sous-chaîne extraite : %s\n", substr); 
			// Devrait afficher "world!"
		free(substr);  // Libération de la mémoire
	}

	// Test 4: Demander une sous-chaîne à partir de la fin de la chaîne
	substr = ft_substr(str, 13, 5);  // Au-delà de la fin,
		devrait retourner une chaîne vide
	if (substr)
	{
		printf("Sous-chaîne extraite : '%s'\n", substr); 
			// Devrait afficher une chaîne vide
		free(substr);  // Libération de la mémoire
	}

	return (0);
}*/
