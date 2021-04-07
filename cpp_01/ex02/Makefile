NAME = a.out
SRCS = Zombie.cpp ZombieEvent.cpp main.cpp

OBJECTS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJECTS)

	@${CXX} ${CXXFLAGS} $(OBJECTS)

clean : 
	@/bin/rm -f *.o

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
