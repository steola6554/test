NAME = test.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC	 = -I.

SRCS = 	utils.c \
		test_for.c \
		test_ifs.c \
		test_switch.c \
		test_whiles.c

OBJS = $(SRCS:%.c=%.o)

all:	$(NAME)

.c.o:
		$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME):$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus