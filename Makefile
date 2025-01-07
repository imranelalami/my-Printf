SRCS_MANDATORY = ft_printf.c ft_putchar.c ft_putstr.c ft_printnb.c ft_printhex.c ft_printunsnb.c
OBJS_MANDATORY = $(SRCS_MANDATORY:.c=.o)


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS_MANDATORY)
	ar rcs $(NAME) $(OBJS_MANDATORY)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS_MANDATORY) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re


.SECONDARY : ${MANDATORY_OBJS} ${BONUS_OBJS}
