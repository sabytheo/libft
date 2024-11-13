/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:36:04 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/13 10:55:52 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*" ". est utilise pour acceder aux membres d'une structure
avec une variable non pointeur.*/

/* "->" est utiliser lorsqu'il y'a un pointeur,
 ce qui combine deferencement et acces en une operation
*/
