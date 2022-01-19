NAME = program

CPP_FILE =	main.cpp Span.cpp

O_FILE = $(CPP_FILE:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILE)
	c++ $(O_FILE) -o $(NAME)

%.o: %.cpp Span.hpp
	@c++ -c -Wall -Wextra -Werror $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all
