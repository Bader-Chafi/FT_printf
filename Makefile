NAME = ft_printf.a
HEADER = ft_printf.h
CC = cc
AR = ar -rc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	ft_printf.c ft_putchr.c ft_putnbr.c \
	ft_putstr.c ft_ayero.c ft_hexadicimal.c
	
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $^

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re