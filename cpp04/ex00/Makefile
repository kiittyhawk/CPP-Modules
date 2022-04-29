NAME			= ex00

INCLUDES 		= ./includes
SRC_PATH 		= ./srcs

HEADER 			= $(INCLUDES)/Animal.hpp $(INCLUDES)/Color.hpp \
				$(INCLUDES)/Cat.hpp $(INCLUDES)/Dog.hpp \
				$(INCLUDES)/WrongCat.hpp $(INCLUDES)/WrongAnimal.hpp

SRCS			= $(SRC_PATH)/Dog.cpp $(SRC_PATH)/Cat.cpp \
				  ./main.cpp $(SRC_PATH)/Animal.cpp \
				  $(SRC_PATH)/WrongCat.cpp $(SRC_PATH)/WrongAnimal.cpp

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
