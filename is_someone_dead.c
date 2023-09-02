#include "philo.h"

int	is_someone_dead(t_args	*args)
{
	long long	time;
	int			i;

	while (1)
	{
		i = 0;
		while (i < args->num_of_p)
		{
			pthread_mutex_lock(&args->philo[i]->eat_mutex);
			time = get_utime();
			if ((time - args->philo[i]->last_eat_t) >= args->die_t)
			{
				pthread_mutex_unlock(&args->philo[i]->eat_mutex);
				kill_them_all(args);
				msleep(1);
				pthread_mutex_lock(&args->stdout_mutex);
				printf("%lld %d %s\n", time - args->start_t,
					args->philo[i]->id, DYING);
				pthread_mutex_unlock(&args->stdout_mutex);
				return (0);
			}
			pthread_mutex_unlock(&args->philo[i]->eat_mutex);
			i++;
		}
	}
	return (-1);
}