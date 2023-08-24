#include "philo.h"

void	init_t_args(char *argv[], t_args *args)
{
	args->philo = ft_atoi(argv[1]);
	args->die = ft_atoi(argv[2]);
	args->eat = ft_atoi(argv[3]);
	args->slp = ft_atoi(argv[4]);
}