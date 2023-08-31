#include "philo.h"

void	*create_human(void *arg)
{
	t_philo	*philo;
	t_args	*args;

	philo = arg;
	args = philo->args;
	philo->eat_c = 0;
	if (pthread_create(&philo->svisor_id, NULL, supervisor, philo) != 0)
		return ();
	while (1)
	{
		printf("%f %d is thinking", (get_utime() - args->start_t), philo->id);
		pthread_mutex_lock(&args->access_mutex);
		if (args->is_dead == 1)
		{
			printf("%f %d died", (get_utime() - args->start_t), philo->id);
			break ;
		}
		pthread_mutex_unlock(&args->access_mutex);
		hold_forks(philo);
		eat_it(philo);
		release_forks(philo);
		sleep_now(philo);
	}
	return (NULL);
}