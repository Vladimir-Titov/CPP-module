NAME	=	phonebook

SRC		=	Contact.cpp	PhoneBook.cpp main.cpp\

CC		=	c++

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

%.o		:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all