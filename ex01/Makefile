NAME = Moar_brainz
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = ${SRC:%.cpp=%.o}

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re