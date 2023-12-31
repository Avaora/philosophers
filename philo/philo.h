/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:21:38 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:22:20 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

struct	s_philo;

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
	int				fed_count;
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
	int				i_am_fed;
	int				eat_c;
	int				id;
	t_args			*args;
}				t_philo;
int			check_args(int argc, char *argv[]);
int			check_t_args(t_args *args);
int			create_philos(t_args *args);
int			deploy_philos(t_args *args);
int			destroy_mutexes(t_args *args);
void		die_msg(t_args *args, int i, long long time);
int			eat_it(t_philo *philo);
int			first_fork(t_philo *philo);
int			free_resources(t_args *args);
int			ft_atoi(char *str);
int			ft_strlen(char *str);
void		*ft_zalloc(size_t size);
long long	get_utime(void);
int			hold_forks(t_philo *philo);
int			init_mutexes(t_args *args);
int			init_t_args(int argc, char *argv[], t_args *args);
int			is_everyone_fed(t_args *args);
int			is_finish(t_philo *philo);
int			is_game_over(t_args	*args);
void		kill_them_all(t_args *args);
void		*life_cycle(void *arg);
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