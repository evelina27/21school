NAME	= libftprintf.a

HEADER	= ft_printf.h

SRCS	= ./src/ft_putchar.c	./src/ft_purnbr.c	./src/ft_putstr.c
			./src/ft_printf.c	./src/ft_print_format.c

СС		= gcc

CFLAGS	= -Wall -Wextra -Werror

OBJS =	${SRCS:.c=.o}

%.o:%.c ${HEADER}
		${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re