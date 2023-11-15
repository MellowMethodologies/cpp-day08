SRCS = main.cpp Span.cpp

OBJS = main.o Span.o

NAME = Span

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Span.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re