NAME	= Zombie
SRC		= newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
HEADER	= Zombie.hpp

all: $(NAME)

$(NAME): $(SRC) $(HEADER) Makefile
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re