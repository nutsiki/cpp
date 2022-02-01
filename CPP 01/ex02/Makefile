NAME = hithisisbrain

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
			@rm -f $(OBJS)

fclean :	clean
			@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re .o