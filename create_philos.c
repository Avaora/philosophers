#include "philo.h"

int	create_philos(t_args *args)
{
	t_philo	*philo;
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		philo = ft_zalloc(sizeof(*philo));
		if (philo == NULL)
			return (-1);
		args->philo[i] = philo;
		philo->args = args;
		if (pthread_mutex_init(&philo->eat_mutex, NULL) != 0)
			return (-1);
		if (pthread_mutex_init(&philo->die_mutex, NULL) != 0)
			return (-1);
		philo->lf_id = i;
		philo->rf_id = ((i + 1) % args->num_of_p);
		philo->am_i_dead = 0;
		philo->i_am_fed = 0;
		philo->eat_c = 0;
		philo->id = i + 1;
		i++;
	}
	return (0);
}