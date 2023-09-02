#include "philo.h"

int	release_forks(t_philo *philo)
{
	if (release_first(philo) != 0)
		return (-1);
	if (release_second(philo) != 0)
		return (-1);
	return (0);
}
