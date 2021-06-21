NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm -f

AR = ar
ARFLAGS = crs

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
         ft_strdup.c

SRCS_B = ft_substr.c \
         ft_strjoin.c \
         ft_strtrim.c \
         ft_split.c \
         ft_itoa.c \
         ft_strmapi.c \
         ft_putchar_fd.c \
         ft_putstr_fd.c \
         ft_putendl_fd.c \
         ft_putnbr_fd.c

SRCS = $(SRCS_A) \
       $(SRCS_B)


OBJS = $(SRCS:.c=.o)


all : $(NAME)


%.o : %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean :
    $(RM) $(RMFLAG) $(OBJS)

fclean : clean
    $(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
    $(AR) $(ARFLAG) $@ $^

.PHONY : all clean fclean re