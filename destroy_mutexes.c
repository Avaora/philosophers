#include "philo.h"

int	destroy_mutexes(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_mutex_destroy(&args->mutex_id[i]) != 0)
			return (-1);
		i++;
	}
	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_mutex_destroy(&args->mutex_id[i]) != 0)
			return (-1);
		if (pthread_mutex_destroy(&args->philo[i]->eat_mutex) != 0)
			return (-1);
		if (pthread_mutex_destroy(&args->philo[i]->die_mutex) != 0)
			return (-1);
		i++;
	}
	return (0);
}