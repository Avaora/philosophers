#include "philo.h"

int	destroy_threx(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_join(args->thread_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_mutex_destroy(&args->mutex_id[i]) != 0)
			return (-1);
		i++;
	}
	pthread_mutex_destroy(&args->stdout_mutex);
	free (args->mutex_id);
	free (args->thread_id);
	free (args->philo);
	return (0);
}