#include "philo.h"

int	is_dead(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((get_utime() - philo->last_eat_t) >= args->die_t)
	{
		pthread_mutex_lock(&args->c_mutex);
		args->is_dead = 1;
		pthread_mutex_unlock(&args->c_mutex);
		return (-1);
	}
	return (0);
}