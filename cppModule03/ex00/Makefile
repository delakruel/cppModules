NAME = clap

CPP_FILE =	main.cpp ClapTrap.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	c++ $(O_FILE) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	@c++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
