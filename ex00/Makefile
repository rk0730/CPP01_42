CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

SRCDIR := .
SRCS += $(SRCDIR)/main.cpp
SRCS += $(SRCDIR)/Zombie.cpp
SRCS += $(SRCDIR)/newZombie.cpp
SRCS += $(SRCDIR)/randomChump.cpp

OBJDIR := objs
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

NAME = zombie

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
