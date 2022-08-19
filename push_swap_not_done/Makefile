
NAME	= push_swap

HEADER	= ft_push_swap.h

SRCS	= ft_check_wr_arr.c		ft_check_wr.c	ft_operations.c		ft_push_swap.c	\
			ft_rot_ops.c		ft_sort_ops.c

LIB_DIR	= libft/

LIBFT	= libft/libft.a

CFLAGS	= -Wall -Wextra -Werror

OBJS =	${SRCS:.c=.o}

%.o:%.c ${HEADER}
		${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			$(MAKE) -C $(LIB_DIR)
			$(CC) $(CFLAGS) ${OBJS} -L ${LIB_DIR} -lft

clean:
			$(MAKE) -C $(LIB_DIR) clean
			rm -rf ${OBJS}

fclean:		clean
			rm -rf $(LIBFT)
			rm -rf ${NAME}

re:			fclean all

.PHONY:		all clean fclean re