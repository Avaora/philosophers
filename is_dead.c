#include "philo.h"

int	is_dead(t_philo *philo)
{
	long long	time;

	time = get_utime() - philo->args->start_t;
	if ((get_utime() - philo->last_eat_t) >= philo->args->die_t)
	{
		if (pthread_mutex_lock(&philo->args->access_mutex) != 0)
			return (-1);
		if (philo->args->is_dead != 0)
		{
			pthread_mutex_unlock(&philo->args->access_mutex);
			return (-1);
		}
		philo->args->dead_t = time;
		philo->args->is_dead = philo->id;
		pthread_mutex_unlock(&philo->args->access_mutex);
		return (-1);
	}
	return (0);
}