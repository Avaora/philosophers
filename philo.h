#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <pthread.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_args
{
	pthread_t	*thread_id;
	int			num_of_f;
	int			num_of_p;
	int			die_t;
	int			eat_t;
	int			slp_t;
	int			num_of_e;
	int			someone_died;
}				t_args;
typedef struct s_philo
{
	t_args	*args;
	int		id;
}				t_philo;
int		check_args(int argc, char *argv[]);
void	*create_human(void *arg);
int		create_philos(t_args *args);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	*ft_zalloc(size_t size);
int		init_t_args(int argc, char *argv[], t_args *args);
int		skip_list(const char *str, char *lst);

#endif