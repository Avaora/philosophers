#include "philo.h"

int	second_fork(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((philo->id % 2) == 0)
	{
		if (pthread_mutex_lock(&args->mutex_id[philo->rf_id]) != 0)
			return (-1);
	}
	else
	{
		if (philo->lf_id == philo->rf_id)
		{
			while ((get_utime() - philo->last_eat_t) <= args->die_t)
				msleep(1);
			if (is_dead(philo) != 0)
				return (-1);
		}
		if (pthread_mutex_lock(&args->mutex_id[philo->lf_id]) != 0)
			return (-1);
	}
	return (0);
}