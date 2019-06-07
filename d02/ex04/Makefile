NAME = eval_expr

FLAGS = clang++ -Wall -Wextra -Werror -std=c++98

OBJ = Fixed.class.o main.o InputReader.class.o

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