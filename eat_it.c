#include "philo.h"

int	eat_it(t_philo *philo)
{
	if (is_finish(philo) != 0)
	{
		release_forks(philo);
		return (-1);
	}
	pthread_mutex_lock(&philo->eat_mutex);
	philo->last_eat_t = get_utime();
	if (philo->eat_c < philo->args->num_of_e)
		philo->eat_c++;
	pthread_mutex_unlock(&philo->eat_mutex);
	if (msg(EATING, philo) != 0)
		return (-1);
	msleep(philo->args->eat_t);
	if (is_finish(philo) != 0)
	{
		release_forks(philo);
		return (-1);
	}
	if (release_forks(philo) != 0)
		return (-1);
	if (sleep_now(philo) != 0)
		return (-1);
	return (0);
}