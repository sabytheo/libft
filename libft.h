/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:05 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/08 11:46:00 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

int	ft_atoi(const char *str);

//bzero
//calloc
int	ft_isalnum(char *str);
int	ft_isalpha(char *str);
int	ft_isascii(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strdup(char *src)
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strchr(const char *s, int c);
char	ft_tolower(char *str);
char	ft_toupper(char *str);

#endif
