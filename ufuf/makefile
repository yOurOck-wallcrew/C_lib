NAME = libft.a
src = ft_atoi.c ft_bzero.c ft_putchar.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putnbr_fd.c  ft_putstr_fd.c \
				ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c



obj = $(src:.c=.o)

CC = gcc -I
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(obj)
	ar rcs $(NAME) libft.h $(obj)

clean:
	rm	-rf $(obj)

fclean: clean
	rm	-rf $(NAME)

re: fclean all