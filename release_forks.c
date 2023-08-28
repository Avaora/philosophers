#include "philo.h"

int	hold_forks(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if (pthread_mutex_unlock(&args->mutex_id[philo->id]) != 0)
		return (-1);
	if (pthread_mutex_unlock(&args->mutex_id[philo->id + 1] != 0))
		return (-1);
	return (0);
}
