SRCS = push_swap.c push_swap1.c push_swap2.c push_swap3.c ft_printf_utils.c \
		ft_printf.c ft_split.c ft_strjoin.c ft_strdup.c ft_atoi.c algo.c \
		algo1.c 

#SRCSB = 
OBJS = ${SRCS:.c=.o}
#OBJSB = ${SRCSB:.c=.o}
NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	$(CC) $(CFLAGS) ${OBJS} -o ${NAME}

#bonus: ${OBJSB} $(CC) $(CFLAGS) ${OBJSB} -o ${NAME}
 
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
