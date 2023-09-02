#include "philo.h"

int	create_philos(t_args *args)
{
	t_philo	*philo;
	int		i;

	i = 0;
	args->start_t = get_utime();
	while (i < args->num_of_p)
	{
		philo = ft_zalloc(sizeof(*philo));
		if (philo == NULL)
			return (-1);
		philo->args = args;
		philo->l_fork = args->mutex_id[i];
		philo->r_fork = args->mutex_id[((i + 1) % args->num_of_p)];
		philo->last_eat_t = get_utime();
		philo->id = i + 1;
		if (pthread_create(&args->thread_id[i], NULL, create_human, philo) != 0)
			return (-1);
		i++;
	}
	return (0);
}