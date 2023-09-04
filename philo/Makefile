SRC =	check_args.c \
		check_t_args.c \
		create_philos.c \
		deploy_philos.c \
		destroy_mutexes.c \
		die_msg.c \
		eat_it.c \
		first_fork.c \
		free_resources.c \
		ft_atoi.c \
		ft_strlen.c \
		ft_zalloc.c \
		get_utime.c \
		hold_forks.c \
		init_mutexes.c \
		init_t_args.c \
		is_everyone_fed.c \
		is_finish.c \
		is_game_over.c \
		kill_them_all.c \
		life_cycle.c \
		msg.c \
		msleep.c \
		philo.c \
		release_first.c \
		release_forks.c \
		release_second.c \
		second_fork.c \
		skip_list.c \
		sleep_now.c \
		think.c 
OBJ = $(SRC:.c=.o)
NAME = philo

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
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