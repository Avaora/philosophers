#include "philo.h"

int	release_first(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((philo->id % 2) == 0)
	{
		if (pthread_mutex_unlock(&philo->l_fork) != 0)
			return (-1);
	}
	else
	{
		if (pthread_mutex_unlock(&philo->r_fork) != 0)
			return (-1);
	}
	return (0);
}