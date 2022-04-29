NAME	= megaphone
CPP		= c++
FLAGS	= -Wall -Wextra -Werror -g -std=c++98
SRC		= megaphone.cpp

all: $(NAME) $(SRC)
	$(CPP) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re:	fclean all

.PHONY: all fclean re