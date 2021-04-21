NAME = a.out

SRCS = AMateria.cpp, Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp

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
