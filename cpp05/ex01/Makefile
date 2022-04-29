NAME			= ex01

INCLUDES 		= ./includes
SRC_PATH 		= ./srcs

HEADER 			= $(INCLUDES)/Bureaucrat.hpp $(INCLUDES)/Form.hpp

SRCS			= $(SRC_PATH)/Bureaucrat.cpp main.cpp \
					$(SRC_PATH)/Form.cpp

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
