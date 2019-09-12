NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c  ./srcs/ft_swap.c

FLAGS = -Wall -Wextra -Werror -c

OFILES = ft_putchar.o ft_putstr.o  ft_strcmp.o ft_strlen.o ft_swap.o
all:
	gcc  $(FLAGS) -I./includes $(SRC)
	ar rc $(NAME) $(OFILES)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
