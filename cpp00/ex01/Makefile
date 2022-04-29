NAME	= phoneBook

all: $(NAME)

$(NAME): phoneBook.hpp Contacts.hpp Contacts.cpp main.cpp phoneBook.cpp Makefile
	c++ -Wall -Wextra -Werror -std=c++98 Contacts.cpp phoneBook.cpp main.cpp -o phoneBook

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re