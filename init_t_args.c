#include "philo.h"

int	init_t_args(int argc, char *argv[], t_args *args)
{
	args->num_of_f = ft_atoi(argv[1]);
	args->num_of_p = ft_atoi(argv[1]);
	args->die_t = ft_atoi(argv[2]);
	args->eat_t = ft_atoi(argv[3]);
	args->slp_t = ft_atoi(argv[4]);
	args->num_of_e = 0;
	args->someone_died = 0;
	if (((args->die_t == -1) || ((args->eat_t == -1) || (args->slp_t == -1)))
		|| ((args->num_of_f == -1) || (args->num_of_p == -1)))
		return (-1);
	if (argc == 6)
	{
		args->num_of_e = ft_atoi(argv[5]);
		if (args->num_of_e == -1)
			return (-1);
	}
	args->thread_id = ft_zalloc(sizeof(*args->thread_id) * args->num_of_p);
	if (args->thread_id == NULL)
		return (-1);
	return (0);
}