#include "philo.h"

int	is_dead(t_philo *philo)
{
	if ((get_utime() - philo->last_eat_t) >= philo->args->die_t)
	{
		pthread_mutex_lock(&philo->args->access_mutex);
		philo->args->is_dead = 1;
		pthread_mutex_unlock(&philo->args->access_mutex);
		return (1);
	}
	return (0);
}