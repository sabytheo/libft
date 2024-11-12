/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:33:40 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/12 16:58:22 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (nbr[i] == 32 || (nbr[i] > 8 && nbr[i] < 14))
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i] > 47 && nbr[i] < 58)
	{
		res = res * 10;
		res = res + nbr[i++] - '0';
	}
	return (res * sign);
}
