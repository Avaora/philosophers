#include "philo.h"

int	hold_forks(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if (is_dead(philo) == -1)
		return (-1);
	if (pthread_mutex_lock(&args->mutex_id[(philo->id - 1)]) != 0)
		return (-1);
	if (is_dead(philo) == -1)
		return (-1);
	printf("%f %d has taken a fork", (get_utime() - philo->born_t), philo->id);
	if (philo->id != args->num_of_p)
	{
		if (pthread_mutex_lock(&args->mutex_id[philo->id]) != 0)
			return (-1);
	}
	else
	{
		if (pthread_mutex_lock(&args->mutex_id[0]) != 0)
			return (-1);
	}
	if (is_dead(philo) == -1)
		return (-1);
	printf("%f %d has taken a fork", (get_utime() - philo->born_t), philo->id);
	return (0);
}
