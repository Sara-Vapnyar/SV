NAME = libft.a

SRC = ft_*.c

FLAGS = -Wall -Wextra -Werror -c

OFILES = ft_*.o

all:    $(NAME)

$(NAME):
	gcc $(FLAGS) -I ./libft.h $(SRC)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
