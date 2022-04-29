NAME	= harlFilter
SRC		= Harl.cpp main.cpp
INCLUDE	= Harl.hpp

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE) Makefile
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all