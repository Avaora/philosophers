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
			if ((args->philo[i]->is_eating != 1)
				&& ((time - args->philo[i]->last_eat_t) >= args->die_t))
			{
				if (check_death(args, i) != 0)
					return (0);
				pthread_mutex_unlock(&args->philo[i]->eat_mutex);
				kill_them_all(args);
				die_msg(args, i, time);
				return (0);
			}
			pthread_mutex_unlock(&args->philo[i]->eat_mutex);
			i++;
		}
	}
	return (-1);
}