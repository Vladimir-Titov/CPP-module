NAME	=	Harl

SRC		=	main.cpp Harl.cpp\

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY	:	all clean fclean re leaks

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ)

%.o		:	%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

leaks	:	all
	leaks --atExit -- ./$(NAME)
re		:	fclean all