#include "philo.h"

int	babysit_them(t_args *args)
{
	pthread_t	mon;

	if (args->num_of_e != -2)
		pthread_create(&mon, NULL, monitor, args);
	while (1)
	{
		if (is_someone_dead(args) == 0)
			break ;
	}
	pthread_join(mon, NULL);
	return (0);
}