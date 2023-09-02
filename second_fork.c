#include "philo.h"

int	second_fork(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((philo->id % 2) == 0)
	{
		if (pthread_mutex_lock(&philo->r_fork) != 0)
			return (-1);
	}
	else
	{
		if (pthread_mutex_lock(&philo->l_fork) != 0)
			return (-1);
	}
	return (0);
}