NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -c
SRCS	= ft_strlen.c ft_strlcat.c ft_strncmp.c ft_strlcpy.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_memchr.c ft_memcmp.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
SRCS_B	= ft_lstnew.c
OBJS	= ${SRCS:.c=.o}
OBJS_B	= ${SRCS_B:.c=.o}
RM		= rm -f


.PHONY:	clean re fclean

all: ${NAME}

$(NAME) : ${OBJS}
	@ar rc ${NAME} ${OBJS}

${OBJS} : ${SRCS} ${SRCS_B} libft.h
	@${CC} ${CFLAGS} $< ${SRCS_B} -o $@

bonus : ${NAME}
	@ar rc ${NAME} ${OBJS_B}

clean:
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}

re:		fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

