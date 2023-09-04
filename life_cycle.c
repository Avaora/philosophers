#include "philo.h"

void	*life_cycle(void *arg)
{
	t_philo	*philo;

	philo = arg;
	while (1)
	{
		if (hold_forks(philo) != 0)
			break ;
		if (eat_it(philo) != 0)
			break ;
		if (think(philo) != 0)
			break ;
	}
	return (NULL);
}