NAME			=	FragTrap

SRCS			=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp

OBJS			=	${SRCS:.cpp=.o}

CXX			=	c++

CPPFLAGS		=	-Werror -Wall -Wextra -std=c++98

all			:	${NAME}

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean			:
	rm -rf ${OBJS}

fclean			:	clean
	rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re