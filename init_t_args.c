#include "philo.h"

int	init_t_args(int argc, char *argv[], t_args *args)
{
	args->num_of_p = ft_atoi(argv[1]);
	args->die_t = ft_atoi(argv[2]);
	args->eat_t = ft_atoi(argv[3]);
	args->slp_t = ft_atoi(argv[4]);
	args->num_of_e = -2;
	if (argc == 6)
		args->num_of_e = ft_atoi(argv[5]);
	if (check_t_args(args) != 0)
		return (-1);
	return (0);
}