GREEN = /bin/echo -e "\x1b[1;3;32m$1\x1b[0m"

SRCS =  srcs/HumanA.cpp  srcs/HumanB.cpp  srcs/main.cpp  srcs/Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@
		$(call GREEN,"Compilation success 😁")

clean:
		rm -f $(OBJS)
		$(call GREEN,"The .o cleaned up !")

fclean:		clean
		rm -f $(NAME)
		$(call GREEN,"all cleaned up !")

re:		fclean all

.SILENT:
.PHONY:		all clean fclean re
