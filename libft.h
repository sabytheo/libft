/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:05 by tsaby             #+#    #+#             */
/*   Updated: 2024/11/08 16:35:28 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(char *str);
int	ft_isalpha(char *str);
int	ft_isascii(int c);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
char *ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
//void ft_putchar_fd(char c, int fd);
//void ft_putendl_fd(char *s, int fd);
//void ft_putnbr_fd(int n, int fd);
//void ft_putstr_fd(char *s, int fd);
//char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
//void ft_striteri(char *s, void (*f)(unsigned int, char*));
//char *ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
//char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
//char *ft_strtrim(char const *s1, char const *set);
//char *ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);

#endif
