NAME = printf.a

SRC = 


OBJ = $(SRC:.c=.o)

CFLAGS= -Wall -Werror -Wextra
CC = cc
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
        $(AR) $(NAME) $(OBJ)

so:
        $(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
        gcc -nostartfiles -shared -o libft.so $(OBJ)

%.o : %.c
        cc $(CFLAGS) -c $< -o $@

clean:
        rm -f $(OBJ)

fclean: clean
        rm -f $(NAME)

re: fclean all

.PHONY: all clean  fclean re