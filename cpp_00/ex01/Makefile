NAME = annuaire_nul

SRCS = main.cpp contact.class.cpp

OBJECTS = $(SRCS:.cpp=.o)

CXX = clang++

CPPFLAGS += -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJECTS)

	@${CXX} -o ${NAME} ${CPPFLAGS} $(OBJECTS)

clean : 
	@/bin/rm -f $(OBJECTS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all