#include "philo.h"

int	init_t_args(int argc, char *argv[], t_args *args)
{
	args->num_of_p = ft_atoi(argv[1]);
	args->die_t = ft_atoi(argv[2]);
	args->eat_t = ft_atoi(argv[3]);
	args->slp_t = ft_atoi(argv[4]);
	args->num_of_e = -2;
	args->is_dead = 0;
	args->dead_t = 0;
	if (argc == 6)
		args->num_of_e = ft_atoi(argv[5]);
	if ((((args->die_t == -1) || (args->eat_t == -1)) || ((args->slp_t == -1)
		|| (args->num_of_p == -1))) || (args->num_of_e == -1))
		return (-1);
	return (0);
}