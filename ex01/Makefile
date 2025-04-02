CXX := c++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

SRCDIR := .
SRCS += $(SRCDIR)/main.cpp
SRCS += $(SRCDIR)/Zombie.cpp
SRCS += $(SRCDIR)/zombieHorde.cpp

OBJDIR := objs
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

NAME = zombie

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
