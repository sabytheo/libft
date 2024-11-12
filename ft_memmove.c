/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:05:47 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 13:43:55 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		while (n-- > 0)
			((char *)dest)[n] = ((char *)src)[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
L[17]
Cela aide à déterminer si les zones mémoire se chevauchent.
Lorsque src est avant dest en mémoire (et que src et dest se chevauchent),
une copie avant-arrière pourrait écraser des données de src avant qu'elles ne soient copiées.
Dans ce cas,
	il est préférable de copier en sens inverse (en partant de la fin) pour éviter les conflits

L[18]
Cette boucle while parcourt les octets en sens inverse,
	de la fin vers le début. n-- décrémente n à chaque itération,
permettant ainsi de copier chaque octet en partant de la fin de src et de dest jusqu’au début. Ce sens de copie est essentiel
si src et dest se chevauchent.

L[19]
((char *)dest)[n] et ((char *)src)[n] : dest et src sont castés en (char *) pour accéder aux données octet par octet
, car un char est un type de 8 bits,
	idéal pour manipuler les données au niveau des octets en mémoire.

L[21]
Copie normale (début vers fin) si aucun chevauchement
 */
