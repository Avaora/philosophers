#include "philo.h"

int	is_finish(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if (pthread_mutex_lock(&args->access_mutex) != 0)
		return (-1);
	if (((args->num_of_e != -2) && (args->fed_one >= args->num_of_e))
		|| (args->is_dead != 0))
	{
		pthread_mutex_unlock(&philo->args->access_mutex);
		return (-1);
	}
	if (pthread_mutex_unlock(&philo->args->access_mutex) != 0)
		return (-1);
	if (is_dead(philo) != 0)
		return (-1);
	return (0);
}