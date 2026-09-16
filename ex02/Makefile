NAME = bin/fire

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj
BIN_DIR = bin

SRC = src/main.cpp \
	  src/AAnimal.cpp \
	  src/Cat.cpp \
	  src/Dog.cpp \
	  src/WrongAnimal.cpp \
	  src/WrongCat.cpp \
	  src/Brain.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))

VPATH = src

all : $(NAME)

$(NAME) : $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

it :	all
	./bin/fire

val:	all
	valgrind --leak-check=full --show-leak-kinds=all ./bin/fire

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(BIN_DIR)
	rm -rf $(NAME)

re: fclean all