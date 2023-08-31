#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <pthread.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>

typedef struct s_args
{
	pthread_mutex_t	stdout_mutex;
	pthread_mutex_t	access_mutex;
	pthread_mutex_t	*mutex_id;
	pthread_t		*thread_id;
	int				num_of_p;
	int				die_t;
	int				eat_t;
	int				slp_t;
	int				num_of_e;
	int				is_dead;
	int				fed_one;
	double			start_t;
}				t_args;
typedef struct s_philo
{
	t_args		*args;
	pthread_t	svisor_id;
	double		last_eat_t;
	int			eat_c;
	int			id;
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