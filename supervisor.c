#include "philo.h"

void	*supervisor(void *arg)
{
	t_philo	*philo;
	t_args	*args;

	philo = arg;
	args = philo->args;
	while (1)
	{
		pthread_mutex_lock(&args->access_mutex);
		if ((get_utime() - philo->last_eat_t) >= philo->args->die_t)
			philo->args->is_dead = 1;
		if (philo->eat_c == args->num_of_e)
		{
			args->fed_one++;
			philo->eat_c++;
		}
		if ((args->is_dead == 1) || (args->fed_one == args->num_of_p))
			break ;
		pthread_mutex_unlock(&args->access_mutex);
	}
}