NAME = libftprintf.a

SRC = ft_putnbr.c ft_puthex.c ft_printf.c ft_putchar.c ft_putpercent.c ft_putstr.c ft_putptr.c ft_putunsigned.c


OBJ = $(SRC:.c=.o)

CFLAGS= -Wall -Werror -Wextra
CC = cc
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean  fclean re
