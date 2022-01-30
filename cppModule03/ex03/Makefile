NAME = diamond

CPP_FILE =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	clang++ $(O_FILE) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	@clang++ -c -Wall -Wextra -Werror -Wshadow $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
