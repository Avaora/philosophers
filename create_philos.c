#include "philo.h"

int	create_philos(t_args *args)
{
	int	i;

	i = 0;
	args->start_t = get_utime();
	create_monitor(args);
	while (i < args->num_of_p)
	{
		args->philo[i] = ft_zalloc(sizeof(*args->philo[i]));
		if (args->philo[i] == NULL)
			return (-1);
		args->philo[i]->args = args;
		if (pthread_mutex_init(&args->philo[i]->eat_mutex, NULL) != 0)
			return (-1);
		if (pthread_mutex_init(&args->philo[i]->die_mutex, NULL) != 0)
			return (-1);
		args->philo[i]->lf_id = i;
		args->philo[i]->rf_id = ((i + 1) % args->num_of_p);
		args->philo[i]->last_eat_t = args->start_t;
		args->philo[i]->am_i_dead = 0;
		args->philo[i]->id = i + 1;
		if (pthread_create(&args->thread_id[i], NULL,
			create_human, args->philo[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}