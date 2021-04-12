NAME = a.out

SRCS = main.cpp Fixed.cpp Fixed.hpp

OBJECTS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJECTS)

	@${CXX} ${CXXFLAGS} -o ${NAME} $(OBJECTS)

clean : 
	@/bin/rm -f $(OBJECTS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
