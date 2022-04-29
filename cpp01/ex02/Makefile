NAME = main

all: $(NAME)

$(NAME): main.cpp Makefile
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re