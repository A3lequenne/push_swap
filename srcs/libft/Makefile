SRCS = 	$(wildcard ./base_lib/*.c ./ft_printf/*.c ./get_next_line/*.c)

OBJS = ${SRCS:.c=.o}

HEADER = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

%.o: %.c ${HEADER}
	@${CC} ${FLAGS} -c $< -o $@ > /dev/null

$(NAME): ${OBJS}
	@ar rc ${NAME} ${OBJS} > /dev/null

all: ${NAME}
	
clean:
	@${RM} ${OBJS} ${OBJBONUS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re