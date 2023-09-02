#include "philo.h"

void	create_monitor(t_args *args)
{
	pthread_t	mon;

	if (args->num_of_e != -2)
		pthread_create(&mon, NULL, monitor, args);
}