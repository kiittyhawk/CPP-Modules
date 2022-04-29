NAME			= ex02

INCLUDES 		= ./includes
SRC_PATH 		= ./srcs

HEADER 			= $(INCLUDES)/Color.hpp $(INCLUDES)/Base.hpp \
					$(INCLUDES)/A.hpp $(INCLUDES)/B.hpp \
					$(INCLUDES)/C.hpp

SRCS			= main.cpp $(SRC_PATH)/A.cpp $(SRC_PATH)/B.cpp \
					$(SRC_PATH)/C.cpp $(SRC_PATH)/Base.cpp

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
