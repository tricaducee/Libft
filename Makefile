# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nouassif <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 17:08:00 by nouassif          #+#    #+#              #
#    Updated: 2021/11/15 01:25:52 by hrolle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a
CCFLAGS =		-Wall -Werror -Wextra

SRCS	=		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	\
			   	ft_isascii.c	ft_isprint.c	ft_strlen.c		\
				ft_memset.c		ft_bzero.c		ft_memcpy.c		\
				ft_memmove.c	ft_strlcpy.c	ft_strdup.c		\
				ft_strlcat.c	ft_toupper.c	ft_tolower.c	\
				ft_strrchr.c	ft_strchr.c		ft_strncmp.c	\
				ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
				ft_calloc.c		ft_atoi.c		ft_substr.c		\
				ft_strjoin.c	ft_strtrim.c

OBJS	=		${SRCS:.c=.o}

all : $(NAME)
	
$(NAME) : ${OBJS}
	ar rcs $@ $^

%.o : %.c
	gcc ${CCFLAGS} -o $@ -c $<

clean :
	rm ${OBJS}

fclean : clean
	rm ${NAME}

re : fclean all

out :
	@echo Compiling..
	@gcc $(CFLAGS) main.c $(SRCS)

cleanout :
	@echo deleting a.out
	@rm a.out
