NAME = phonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = My_Awesome_PhoneBook.cpp

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