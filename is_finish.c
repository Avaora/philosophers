#include "philo.h"

int	is_finish(t_philo *philo)
{
	pthread_mutex_lock(&philo->die_mutex);
	if (philo->am_i_dead == 1)
	{
		pthread_mutex_unlock(&philo->die_mutex);
		return (-1);
	}
	pthread_mutex_unlock(&philo->die_mutex);
	return (0);
}