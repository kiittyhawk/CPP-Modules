NAME			= ex02

INCLUDES 		= ./includes
SRC_PATH 		= ./srcs

HEADER 			= $(INCLUDES)/ClapTrap.hpp $(INCLUDES)/Color.hpp \
					$(INCLUDES)/ScavTrap.hpp $(INCLUDES)/FragTrap.hpp

SRCS			= $(SRC_PATH)/ClapTrap.cpp \
				  ./main.cpp $(SRC_PATH)/ScavTrap.cpp \
				  $(SRC_PATH)/FragTrap.cpp

OBJS			= ${SRCS:.cpp=.o}

CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -f

%.o:			%.cpp $(HEADER) Makefile
				${CC} ${CFLAGS} -I$(INCLUDES) -c $< -o ${<:.cpp=.o}
				
all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} -I$(INCLUDES) ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re .cpp.o
