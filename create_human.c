#include "philo.h"

void	*create_human(void *arg)
{
	t_philo	*philo;
	t_args	*args;

	philo = arg;
	args = philo->args;
	philo->born_t = get_utime();
	philo->last_eat_t = philo->born_t;
	while (1)
	{
		if (hold_forks(philo) == -1)
			return (philo->);
		eat_it(philo);
		release_forks(philo);
		sleep_now(philo);
	}
	return (NULL);
}