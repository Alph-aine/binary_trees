NAME = new

CC = gcc
CFLAGS = -MMD -Wall -Werror -Wextra -pedantic

SRC := $(wildcard *.c)
SRC := $(filter-out $(wildcard *main.c), $(SRC))

OBJ := $(SRC:.c=.o)
DEP := $(SRC:.c=.d)

RM = rm -f

all: binary_trees.h $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(main)

-include $(DEP)

clean:
	$(RM) $(NAME) $(DEP)

oclean:
	$(RM) $(OBJ) $(DEP)

fclean: clean oclean

re: oclean all

.PHONY: run
run: $(NAME)
	./$(NAME)
