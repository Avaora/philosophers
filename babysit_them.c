#include "philo.h"

int	babysit_them(t_args *args)
{
	while (1)
	{
		if (pthread_mutex_lock(&args->access_mutex) != 0)
			return (-1);
		if (args->is_dead != 0)
		{
			printf("%lld %d %s", (get_utime() - args->start_t),
				args->is_dead, DYING);
			return (0);
		}
		if ((args->num_of_e != -2) && (args->fed_one >= args->num_of_e))
			return (0);
		if (pthread_mutex_unlock(&args->access_mutex) != 0)
			return (-1);
	}
	return (0);
}