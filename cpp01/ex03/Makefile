NAME	= violence
SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
HEADER	= HumanA.hpp HumanB.hpp Weapon.hpp


all: $(NAME)

$(NAME): $(SRC) $(HEADER) Makefile
	c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re