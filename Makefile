SRC =	check_args.c \
		ft_atoi.c \
		ft_strlen.c \
		init_t_args.c \
		set_exit.c \
		skip_list.c 
OBJ = $(SRC:.c=.o)
NAME = philo

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
clean : 
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re