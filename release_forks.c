#include "philo.h"

int	hold_forks(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if (pthread_mutex_unlock(&args->mutex_id[philo->id - 1]) != 0)
		return (-1);
	if (philo->id != args->num_of_p)
	{
		if (pthread_mutex_unlock(&args->mutex_id[philo->id]) != 0)
			return (-1);
	}
	else
	{
		if (pthread_mutex_unlock(&args->mutex_id[0]) != 0)
			return (-1);
	}
	return (0);
}
