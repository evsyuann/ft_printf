CFLAGS = -Wall -Wextra -Werror
HEAD = ./includes/
SRC = ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_ptr.c ft_print_str.c \
      ft_print_unsigned.c ft_printf.c

OBJS = $(SRC:.c=.o)
NAME = libftprintf.a

.c.o:
		cc $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re