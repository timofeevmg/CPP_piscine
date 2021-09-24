NAME = test

SRC = ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp \
	Form.cpp \
	Bureaucrat.cpp \
	main.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wc++98-compat-pedantic

RM = rm -f

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

DBG_OUT = dbg

dbg :
	$(CC) $(CFLAGS) -g $(SRC) -o $(DBG_OUT)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME) $(DBG_OUT)

re : fclean all

.PHONY : all clean fclean re dbg
