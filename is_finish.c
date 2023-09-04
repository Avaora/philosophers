#include "philo.h"

int	is_finish(t_philo *philo)
{
	if (pthread_mutex_lock(&philo->die_mutex) != 0)
		return (-1);
	if (philo->am_i_dead == 1)
	{
		pthread_mutex_unlock(&philo->die_mutex);
		return (-1);
	}
	if (pthread_mutex_unlock(&philo->die_mutex) != 0)
		return (-1); 
	return (0);
}