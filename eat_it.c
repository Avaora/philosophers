#include "philo.h"

int	eat_it(t_philo *philo)
{
	if (is_finish(philo) != 0)
	{
		release_forks(philo);
		return (-1);
	}
	if (msg(EATING, philo) != 0)
		return (-1);
	msleep(philo->args->eat_t);
	philo->last_eat_t = get_utime();
	philo->eat_c++;
	if (philo->eat_c == philo->args->num_of_e)
	{
		if (pthread_mutex_lock(&philo->args->access_mutex) != 0)
			return (-1);
		philo->args->fed_one++;
		if (pthread_mutex_unlock(&philo->args->access_mutex) != 0)
			return (-1);
	}
	return (0);
}