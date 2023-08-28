#include "philo.h"

int	init_t_args(int argc, char *argv[], t_args *args)
{
	int	i;

	i = 0;
	args->num_of_p = ft_atoi(argv[1]);
	args->die_t = ft_atoi(argv[2]);
	args->eat_t = ft_atoi(argv[3]);
	args->slp_t = ft_atoi(argv[4]);
	args->num_of_e = 0;
	if (argc == 6)
		args->num_of_e = ft_atoi(argv[5]);
	args->someone_died = 0;
	if ((((args->die_t == -1) || (args->eat_t == -1)) || ((args->slp_t == -1)
		|| (args->num_of_p == -1))) || (args->num_of_e == -1))
		return (-1);
	args->mutex_id = ft_zalloc(sizeof(*args->mutex_id) * args->num_of_p);
	args->thread_id = ft_zalloc(sizeof(*args->thread_id) * args->num_of_p);
	if ((args->mutex_id == NULL) || (args->thread_id == NULL))
		return (-1);
	while (i < args->num_of_p)
	{
		if (pthread_mutex_init(&args->mutex_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	return (0);
}