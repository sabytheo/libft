/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:05 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/05 18:24:38 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#   define LIBFT_H

#   include <stddef.h>
#   include <unistd.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);
int    ft_strlen(char *str);
int    ft_isprint(char *str);
int    ft_isdigit(char *str);
int    ft_isascii(char *str);
int    ft_isalpha(char *str);
int    ft_isalnum(char *str);
char    ft_tolower(char *str);
char    ft_toupper(char *str);
char *ft_strchr(const char *s, int c);

#endif