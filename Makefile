NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
AR = ar -rc
CFLAGS = -Wall -Wextra -Werror

SOURCES = \
	ft_printf.c \
	ft_printf_utils.c
	
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
