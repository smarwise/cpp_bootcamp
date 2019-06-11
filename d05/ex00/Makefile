NAME = bureaucrat

FLAGS = clang++ -Wall -Wextra -Werror -Wuninitialized -std=c++98

OBJ = Bureaucrat.o main.o

$(NAME): $(OBJ)
	$(FLAGS) -o $(NAME) $(OBJ)

all:
	make $(NAME)

$(OBJ): %.o: %.cpp
	$(FLAGS) -c $*.cpp -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all