# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 09:38:01 by rmarquar          #+#    #+#              #
#    Updated: 2024/02/06 12:23:32 by rmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

CC 		:= 	cc
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f

SRCS	:= 	ft_atoi.c ft_calloc.c ft_isascii.c ft_isprint.c ft_isalpha.c \
			ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_isdigit.c ft_isalnum.c \
			ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_strdup.c ft_strlcat.c ft_strrchr.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strcpy.c

BONUS_S	:=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJS	:=	$(SRCS:.c=.o)
BONUS_O :=	$(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(BONUS_O)
			ar -rcs $(NAME) $(OBJS)

bonus:		$(NAME) $(BONUS_O)
			ar -rcs $(NAME) $(BONUS_O)

.c.o:		%.o: %.c
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus
