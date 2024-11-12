/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:06:21 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 13:44:00 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char)c) == (((unsigned char *)s)[i]))
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*(unsigned char)c : c est converti en unsigned char pour être comparé aux octets de s.
On fait cette conversion parce qu’on cherche un octet (8 bits), et en C,
	un char est souvent de 8 bits.
Cela permet aussi d’ignorer les éventuels signes négatifs si c est entre
	-128 et 255.*/

/*On convertit s en (unsigned char *) pour pouvoir lire chaque octet individuellement.
En effet, s est un void * (donc un pointeur générique),
	et en le castant en unsigned char *,
on peut accéder à chaque octet de façon indexée : ((unsigned char *)s)[i] est l’octet à la position i dans s.*/

/* :  [L26] On utilise un void * ici pour conserver la signature de la fonction,
	qui doit retourner un void *.
Cela rend le code plus flexible,
	car la fonction peut être utilisée pour rechercher n’importe quel type de données.*/
