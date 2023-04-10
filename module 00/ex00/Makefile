GREEN = /bin/echo -e "\x1b[1;3;32m$1\x1b[0m"
SRC =  	megaphone.cpp

OBJ = $(SRC:.cpp=.o)
NAME = megaphone
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CXXFLAGS) $(OBJ) -o $@
		$(call GREEN,"Compilation success 😁")

clean:
		rm -f $(OBJ)
		$(call GREEN,"The .o cleaned up !")

fclean:		clean
		rm -f $(NAME)
		$(call GREEN,"all cleaned up !")

re:		fclean all

.SILENT:
.PHONY:		all clean fclean re test 
