NAME = a.out

SRCS = Bureaucrat.cpp main.cpp Form.cpp Intern.cpp\
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJECTS = $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS += -g3 -Wall -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(OBJECTS)

	@${CXX} ${CXXFLAGS} -o ${NAME} $(OBJECTS)

clean : 
	@/bin/rm -f $(OBJECTS)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
