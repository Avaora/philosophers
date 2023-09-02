SRC =	babysit_them.c \
		check_args.c \
		create_human.c \
		create_philos.c \
		destroy_threx.c \
		eat_it.c \
		first_fork.c \
		ft_atoi.c \
		ft_strlen.c \
		ft_zalloc.c \
		get_utime.c \
		hold_forks.c \
		init_t_args.c \
		init_threx.c \
		is_dead.c \
		is_finish.c \
		msg.c \
		msleep.c \
		philo.c \
		release_first.c \
		release_forks.c \
		release_second.c \
		second_fork.c \
		skip_list.c \
		sleep_now.c 
OBJ = $(SRC:.c=.o)
NAME = philo

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
LFLAGS = -lpthread

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
clean : 
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re