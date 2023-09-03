#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <pthread.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>

# define PICKING "has taken a fork"
# define EATING "is eating"
# define SLEEPING "is sleeping"
# define THINKING "is thinking"
# define DYING "died"

struct s_philo;

typedef struct s_args
{
	struct s_philo	**philo;
	pthread_mutex_t	stdout_mutex;
	pthread_mutex_t	*mutex_id;
	pthread_t		*thread_id;
	int				num_of_p;
	int				die_t;
	int				eat_t;
	int				slp_t;
	int				num_of_e;
	long long		start_t;
}				t_args;
typedef struct s_philo
{
	pthread_mutex_t	eat_mutex;
	pthread_mutex_t	die_mutex;
	int				lf_id;
	int				rf_id;
	long long		last_eat_t;
	int				am_i_dead;
	int				is_eating;
	int				eat_c;
	int				id;
	t_args			*args;
}				t_philo;
int			babysit_them(t_args *args);
int			check_args(int argc, char *argv[]);
int			check_death(t_args *args, int i);
int			check_t_args(t_args *args);
void		*create_human(void *arg);
void		create_monitor(t_args *args);
int			create_philos(t_args *args);
int			destroy_threx(t_args *args);
void		die_msg(t_args *args, int i, long long time);
int			eat_it(t_philo *philo);
int			first_fork(t_philo *philo);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
void		*ft_zalloc(size_t size);
long long	get_utime(void);
int			hold_forks(t_philo *philo);
int			init_t_args(int argc, char *argv[], t_args *args);
int			init_threx(t_args *args);
int			is_finish(t_philo *philo);
int			is_someone_dead(t_args	*args);
void		kill_them_all(t_args *args);
void		*monitor(void *arg);
int			msg(char *str, t_philo *philo);
void		msleep(int msec);
int			release_first(t_philo *philo);
int			release_forks(t_philo *philo);
int			release_second(t_philo *philo);
int			second_fork(t_philo *philo);
int			skip_list(const char *str, char *lst);
int			sleep_now(t_philo *philo);
int			think(t_philo *philo);

#endif