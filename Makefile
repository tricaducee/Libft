# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 20:47:41 by hrolle            #+#    #+#              #
#    Updated: 2021/12/23 08:39:22 by hrolle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CfLAGS	=	-Wall -Wextra -Werror

CC		=	cc

SRCS	=		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	\
			   	ft_isascii.c	ft_isprint.c	ft_strlen.c		\
				ft_memset.c		ft_bzero.c		ft_memcpy.c		\
				ft_memmove.c	ft_strlcpy.c	ft_strdup.c		\
				ft_strlcat.c	ft_toupper.c	ft_tolower.c	\
				ft_strrchr.c	ft_strchr.c		ft_strncmp.c	\
				ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
				ft_calloc.c		ft_atoi.c		ft_substr.c		\
				ft_strjoin.c	ft_strtrim.c	ft_split.c		\
				ft_itoa.c		ft_strmapi.c	ft_striteri.c	\
				ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c \
				ft_putnbr_fd.c	

SRCS_B	=		ft_lstnew.c		ft_lstadd_front.c

OBJS	=	${SRCS:.c=.o}

OBJS_B	=	${SRCS_B:.c=.o}

RM		=	rm -f

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

bonus:		$(OBJS) $(OBJS_B)
			ar rcs $(NAME) $(OBJS) $(OBJS_B)

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all
