NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -c
SRCS	= ft_strlen.c ft_strlcat.c ft_strncmp.c ft_strlcpy.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_memchr.c ft_memcmp.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
OBJS	= ${SRCS:.c=.o}
RM		= rm -f


.PHONY:	clean re fclean

all: ${NAME}

$(NAME) : ${OBJS}
	@ar rc ${NAME} ${OBJS}

${OBJS} : ${SRCS} libft.h
	@${CC} ${CFLAGS} $< -o $@

clean:
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}

re:		fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

