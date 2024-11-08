# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 12:50:41 by tsaby             #+#    #+#              #
#    Updated: 2024/11/08 14:07:30 by tsaby            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		:= \
					ft_atoi.c\
					ft_bzero.c\
					ft_calloc.c\
					ft_isalnum.c\
					ft_isalpha.c\
					ft_isascii.c\
					ft_isdigit.c\
					ft_isprint.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_memcpy.c\
					ft_memmove.c\
					ft_memset.c\
					ft_strchr.c\
					ft_strdup.c\
					ft_strlcat.c\
					ft_strlen.c\
					ft_strnstr.c\
					ft_strrchr.c\
					ft_tolower.c\
					ft_toupper.c\

SRCS_D		:=	#

OBJS_D		:=	objs/

OBJS		:=	$(SRCS:%.c=$(OBJS_D)%.o)

HEAD		:=	libft.h

HEAD_D		:= .

CFLAGS		:= -Wall -Wextra -Werror

AR			:=	ar rcs

NAME		:=	libft.a

all			:	$(NAME)

$(NAME)		:	$(OBJS_D) $(OBJS) Makefile
					$(AR) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJS)		:	$(OBJS_D)%.o: $(SRCS_D)%.c $(HEAD)
				$(CC) $(CFLAGS) -I$(HEAD_D) -c $< -o $@

$(OBJS_D)	:
				@mkdir -p $(OBJS_D)

clean		:
				$(RM) -r $(OBJS) $(OBJS_D)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY:	all clean fclean re
