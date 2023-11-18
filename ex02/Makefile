SRCS = main.cpp

NAME = Span

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = MutantStack.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re