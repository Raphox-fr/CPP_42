NAME			=	ex01

SRCS			=	main.cpp PhoneBook.cpp Contact.cpp

OBJS			=	${SRCS:.c=.o}

CC			=	g++ 

CFLAGS		=	-Werror -Wall -Wextra -std=c++98

all			:	${NAME}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# clean			:
# 	rm -rf ${OBJS}

# fclean			:	clean
# 	rm -rf ${NAME}

# re				:	fclean all

.PHONY			:	all clean fclean re