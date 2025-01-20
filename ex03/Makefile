CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

# SRCS
SRCDIR := .
SRCS += $(SRCDIR)/main.cpp
SRCS += $(SRCDIR)/Weapon.cpp
SRCS += $(SRCDIR)/HumanA.cpp

# 実行ファイル名
NAME = violence

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
