#include "philo.h"

int	check_death(t_args *args, int i)
{
	if (args->philo[i]->am_i_dead == 1)
	{
		pthread_mutex_unlock(&args->philo[i]->eat_mutex);
		return (-1);
	}
	return (0);
}