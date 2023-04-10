GREEN = /bin/echo -e "\x1b[1;3;32m$1\x1b[0m"

SRCS =  srcs/AMateria.cpp srcs/Character.cpp srcs/Ice.cpp srcs/main.cpp srcs/MateriaSource.cpp srcs/Cure.cpp

OBJS = $(SRCS:.cpp=.o)

INC = -I inc

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = a.out

all:		$(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@ $(INC)

$(NAME):	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(INC)
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
