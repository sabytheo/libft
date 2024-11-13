/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:41:16 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/13 18:49:58 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;
	void	*new;

	temp2 = NULL;
	while (lst != NULL)
	{
		new = f(lst->content);
		temp = ft_lstnew(new);
		if (!temp)
		{
			del(new);
			ft_lstclear(&temp2, del);
			return (NULL);
		}
		ft_lstadd_back(&temp2, temp);
		lst = lst->next;
	}
	return (temp2);
}
