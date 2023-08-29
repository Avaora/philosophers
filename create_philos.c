#include "philo.h"

int	create_philos(t_args *args)
{
	t_philo	*philo;
	int		i;

	i = 0;
	while (i < args->num_of_p)
	{
		philo = ft_zalloc(sizeof(*philo));
		if (philo == NULL)
			return (-1);
		philo->args = args;
		philo->eat_c = 0;
		philo->id = i + 1;
		if ((philo->id % 2) == 0)
			pthread_create(&args->thread_id[i], NULL, create_human, philo);
		else
		{
			usleep(100);
			pthread_create(&args->thread_id[i], NULL, create_human, philo);
		}
		i++;
	}
	return (0);
}