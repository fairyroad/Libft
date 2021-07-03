# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/17 15:37:32 by ygil              #+#    #+#              #
#    Updated: 2021/06/22 14:42:55 by ygil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

INCLUDES = ./libft.h

SRCS_A = ft_memset.c \
		 ft_bzero.c \
		 ft_memcpy.c \
		 ft_memccpy.c \
		 ft_memmove.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strlen.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strnstr.c \
		 ft_strncmp.c \
		 ft_atoi.c \
		 ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_calloc.c \
		 ft_strdup.c \

SRCS_B = ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_split.c \
		 ft_itoa.c \
		 ft_strmapi.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \

SRCS_BONUS = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstdelone.c \
			 ft_lstclear.c \
			 ft_lstiter.c \
			 ft_lstmap.c \

SRCS = $(SRCS_A) \
	   $(SRCS_B) \


OBJS = $(SRCS:.c=.o)


OBJS_BONUS = $(SRCS_BONUS:.c=.o)


all : $(NAME)


%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(NAME)

re : clean all

$(NAME) : $(OBJS)
	$(AR) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^

.PHONY : all clean fclean re
