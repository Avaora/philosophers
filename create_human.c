#include "philo.h"

void	*create_human(void *arg)
{
	t_philo	*philo;
	t_args	*args;
	double	time;

	philo = arg;
	args = philo->args;
	time = get_utime();
	philo->last_eat = time;
	while (1)
	{
		if ((philo->id % 2) == 0)
		{
			hold_forks(philo, time);
			eat_it(philo, time);
			release_forks(philo);
			sleep_now(philo, time);
		}
		else
		{
		}
	}
	return (NULL);
}