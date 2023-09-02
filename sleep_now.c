#include "philo.h"

int	sleep_now(t_philo *philo)
{
	if (is_finish(philo) != 0)
		return (-1);
	if (msg(SLEEPING, philo) != 0)
		return (-1);
	if (release_forks(philo) != 0)
		return (-1);
	msleep(philo->args->slp_t);
	if (is_finish(philo) != 0)
		return (-1);
	return (0);
}