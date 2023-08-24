#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <pthread.h>
# include <limits.h>

typedef struct s_args
{
	int	philo;
	int	die;
	int	eat;
	int	slp;
}				t_args;

void	check_args(int argc, char *argv[]);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	init_t_args(char *argv[], t_args *args);
void	set_exit(void);
int		skip_list(const char *str, char *lst);

#endif