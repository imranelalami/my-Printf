CC = cc
CFLAGS = -Wall -Werror -Werror
NAME =  libftprintf.a
RM = rm -rf
AR = ar rcs
SOURCE =  ft_printf.c  ft_putchar.c  ft_puthex.c  ft_putnbr.c  ft_putptr.c\
		  ft_putstr.c  ft_put_unsigned.c

OBJECT = $(SOURCE:.c=.o) 

.PHONY: clean

all: $(NAME)

$(NAME) : $(OBJECT)
	ar rcs $(NAME) $(SOURCE)

clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all
