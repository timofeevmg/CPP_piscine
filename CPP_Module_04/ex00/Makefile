NAME = test

SRC = Animal.cpp \
	Dog.cpp \
	Cat.cpp \
	main.cpp

OBJ = $(SRC:.cpp=.o)

NAME_WRONG = test_wrong

SRC_WRONG = WrongAnimal.cpp \
			WrongDog.cpp \
			WrongCat.cpp \
			w_main.cpp

OBJ_WRONG = $(SRC_WRONG:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

RM = rm -f

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


wrong : $(NAME_WRONG)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME_WRONG) : $(OBJ_WRONG)
	$(CC) $(CFLAGS) $(OBJ_WRONG) -o $(NAME_WRONG)

DBG_OUT = dbg

dbg :
	$(CC) $(CFLAGS) -g $(SRC) -o $(DBG_OUT)

clean :
	$(RM) $(OBJ) $(OBJ_WRONG)

fclean : clean
	$(RM) $(NAME) $(NAME_WRONG) $(DBG_OUT)

re : fclean all

.PHONY : all clean fclean re dbg
