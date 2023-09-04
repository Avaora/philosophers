#include "philo.h"

int	init_mutexes(t_args *args)
{
	int	i;

	i = 0;
	if (pthread_mutex_init(&args->stdout_mutex, NULL) != 0)
		return (-1);
	while (i < args->num_of_p)
	{
		if (pthread_mutex_init(&args->mutex_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	return (0);
}