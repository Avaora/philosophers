#include "philo.h"

void	*monitor(void *arg)
{
	t_args	*args;
	int		fed_one;
	int		i;

	args = arg;
	fed_one = 0;
	while (1)
	{
		i = 0;
		while (i < args->num_of_p)
		{
			if (is_finish(args->philo[i]) != 0)
				return (NULL);
			pthread_mutex_lock(&args->philo[i]->eat_mutex);
			if (args->philo[i]->eat_c == args->num_of_e)
				fed_one++;
			pthread_mutex_unlock(&args->philo[i]->eat_mutex);
			i++;
		}
		if (fed_one >= args->num_of_p)
		{
			msleep(500);
			kill_them_all(args);
			break ;
		}
	}
	return (NULL);
}