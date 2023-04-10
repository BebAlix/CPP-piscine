# Color messages
GREEN = /bin/echo -e "\x1b[1;3;32m$1\x1b[0m"

# Executable name
NAME = a.out

#Compilation options
CXX			= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g -I $(INCDIR)

# Directories
INCDIR    = inc
SRCDIR    = srcs
OBJDIR    = obj

# Sources files
SRC_NAME =  main.cpp \

OBJS = $(addprefix $(OBJDIR)/, $(SRC_NAME:.cpp=.o))

# Rules
$(OBJDIR)/%.o:    $(SRCDIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@
		$(call GREEN,"Compilation success !")

clean:

		@if [ -d $(OBJDIR) ]; then \
		rm -rf $(OBJDIR) && \
		$(call GREEN,"Obj cleaned up !"); \
		fi

fclean:		clean
		@if [ -e $(NAME) ]; then \
        rm -rf $(NAME) && \
		$(call GREEN,"Exec cleaned up !"); \
		fi

re:		fclean all

.SILENT:
.PHONY:		all clean fclean re
