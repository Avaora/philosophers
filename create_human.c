#include "philo.h"

void	*create_human(void *arg)
{
	t_philo	*philo;

	philo = arg;
	philo->eat_c = 0;
	while (1)
	{
		if (msg(THINKING, philo) != 0)
			break ;
		if (is_finish(philo) != 0)
			break ;
		if (hold_forks(philo) != 0)
			break ;
		if (eat_it(philo) != 0)
			break ;
		if (sleep_now(philo) != 0)
			break ;
	}
	pthread_mutex_destroy(&philo->eat_mutex);
	pthread_mutex_destroy(&philo->die_mutex);
	free(philo);
	return (NULL);
}