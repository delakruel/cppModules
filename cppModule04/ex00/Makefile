NAME = animals

CPP_FILE =	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongDog.cpp WrongCat.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	clang++ $(O_FILE) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongDog.hpp WrongCat.hpp
	@clang++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
