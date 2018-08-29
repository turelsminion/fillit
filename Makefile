NAME = fillit

PATH_SRC = ./src/

PATH_OBJ = ./

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I ./includes/

SRC = 	$(PATH_SRC)main.c \
		$(PATH_SRC)check.c \
		$(PATH_SRC)check_tetr.c \
		$(PATH_SRC)ft_putchar.c \
		$(PATH_SRC)ft_putstr.c \
		$(PATH_SRC)malloc_char.c \
		$(PATH_SRC)create_nod.c \
		$(PATH_SRC)insert.c \
		$(PATH_SRC)print_tab.c \


OBJ = $(patsubst %.c,%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAG) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all