NAME = scav

CPP_FILE =	main.cpp ClapTrap.cpp ScavTrap.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	clang++ $(O_FILE) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	@clang++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
