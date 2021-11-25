NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_check_percent.c\
		ft_print_char.c \
		ft_print_hexa_lower.c\
		ft_print_pointer.c\
		ft_print_unsigned.c\
		ft_strlen.c\
		ft_itoa.c\
		ft_print_decimal.c\
		ft_print_hexa_upper.c\
		ft_print_string.c\
		ft_printf.c\
		ft_strdup.c\

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = @ar -rcs

all: $(NAME)

$(NAME):$(OBJS) 
	$(AR) $(NAME) $(OBJS)

%.o:%.c $(INC)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all