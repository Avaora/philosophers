#include "philo.h"

int	hold_forks(t_philo *philo)
{
	if (first_fork(philo) != 0)
		return (-1);
	if (is_finish(philo) != 0)
	{
		release_first(philo);
		return (-1);
	}
	if (msg(PICKING, philo) != 0)
		return (-1);
	if (second_fork(philo) != 0)
		return (-1);
	if (is_finish(philo) != 0)
	{
		release_forks(philo);
		return (-1);
	}
	if (msg(PICKING, philo) != 0)
		return (-1);
	return (0);
}
