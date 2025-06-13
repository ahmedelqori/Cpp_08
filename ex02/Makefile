NAME = Stack
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM = rm -rf

SRC = ./src/main.cpp 
LIB =  ./includes/MutantStack.hpp  ./includes/MutantStack.tpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(LIB)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all