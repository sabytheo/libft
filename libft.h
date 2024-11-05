/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:05 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/05 16:11:58 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#   define LIBFT_H

#   include <stddef.h>
#   include <unistd.h>

unsigned int    ft_strlen(char *str);
unsigned int    ft_isprint(char *str);
unsigned int    ft_isdigit(char *str);
unsigned int    ft_isascii(char *str);
unsigned int    ft_isalpha(char *str);
unsigned int    ft_isalnum(char *str);

#endif