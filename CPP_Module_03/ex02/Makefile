NAME = test

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

RM = rm -f

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

dbg :
	$(CC) $(CFLAGS) -g $(SRC) -o dbg

.PHONY : all clean fclean re dbg
