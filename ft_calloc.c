/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:12:10 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/08 12:49:14 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *mall;

	mall = malloc(nmemb * size);

	if (!mall)
		return (mall);
	ft_bzero(mall, nmemb * size);
	return (mall);
}

/*int	main (void)
{
	size_t nmemb = 5;
	size_t size = sizeof(int);
	size_t i = 0;

	int *arr = (int *)ft_calloc(nmemb, size);

	printf("Valeurs dans le tableau initialisé par ft_calloc :\n");
	while( i++ < nmemb)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}

	free(arr);
	return (0);

}
*/
