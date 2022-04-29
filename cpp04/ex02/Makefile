NAME			= ex02

INCLUDES 		= ./includes
SRC_PATH 		= ./srcs

HEADER 			= $(INCLUDES)/AAnimal.hpp $(INCLUDES)/Color.hpp \
				$(INCLUDES)/Cat.hpp $(INCLUDES)/Dog.hpp \
				$(INCLUDES)/Brain.hpp

SRCS			= $(SRC_PATH)/Dog.cpp $(SRC_PATH)/Cat.cpp \
				  ./main.cpp $(SRC_PATH)/AAnimal.cpp \
				  $(SRC_PATH)/Brain.cpp

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
