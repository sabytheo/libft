/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:05 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/06 13:08:15 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

intft_strncmp(char *s1, char *s2, unsigned int n);
int    ft_strlen(char *str);
int    ft_isprint(char *str);
int    ft_isdigit(char *str);
int    ft_isascii(char *str);
int    ft_isalpha(char *str);
int    ft_isalnum(char *str);
char    ft_tolower(char *str);
char    ft_toupper(char *str);
char *ft_strchr(const char *s, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);

#endif