NAME			=	Harl

SRCS			=	main.cpp Harl.cpp

OBJS			=	${SRCS:.cpp=.o}

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -std=c++98

all			:	${NAME}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean			:
	rm -rf ${OBJS}

fclean			:	clean
	rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re