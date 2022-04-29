NAME			= ex02

# INCLUDES 		= ./includes
# SRC_PATH 		= ./srcs

HEADER 			= MutantStack.hpp

SRCS			= main.cpp

OBJS			= ${SRCS:.cpp=.o}

CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -f

%.o:			%.cpp $(HEADER) Makefile
				${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}
				
all:			${NAME}

${NAME}:		${OBJS} $(HEADER)
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re .cpp.o
