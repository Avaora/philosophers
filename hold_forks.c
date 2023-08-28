#include "philo.h"

int	hold_forks(t_philo *philo, double time)
{
	t_args	*args;
	double	cur_time;

	args = philo->args;
	cur_time = (get_utime() - time);
	if (pthread_mutex_lock(&args->mutex_id[philo->id]) != 0)
		return (-1);
	if (((get_utime() - time) - cur_time) >= args->die_t)
		return (-1);
	printf("%f %d has taken a fork", (get_utime() - time), philo->id);
	cur_time = (get_utime() - time);
	if (pthread_mutex_lock(&args->mutex_id[philo->id + 1] != 0))
		return (-1);
	if (((get_utime() - time) - cur_time) >= args->die_t)
		return (-1);
	printf("%f %d has taken a fork", (get_utime() - time), philo->id);
	return (0);
}
