/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:33:40 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/05 15:57:46 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    size_t    i;
    int    value;
    int    sign;

    sign = 1;
    value = 0;
    i = 0;
    if ((str[i] <= '~' && str[i] > '9') || (str[i] < '0' && str[i] > '-')
        || (str[i] < '-' && str[i] > '+') || (str[i] < '+' && str[i] > ' '))
        return (0);
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        value = value * 10 + (str[i] - '0');
        i++;
    }
    return (value * sign);
}