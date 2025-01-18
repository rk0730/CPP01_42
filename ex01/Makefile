CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

# SRCS
SRCDIR := .
SRCS += $(SRCDIR)/main.cpp
SRCS += $(SRCDIR)/Zombie.cpp
SRCS += $(SRCDIR)/zombieHorde.cpp

# 実行ファイル名
NAME = zombie

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
