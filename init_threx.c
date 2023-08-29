#include "philo.h"

int	init_threx(t_args *args)
{
	int	i;

	i = 0;
	if (pthread_mutex_init(&args->c_mutex, NULL) != 0)
		return (-1);
	args->mutex_id = ft_zalloc(sizeof(*args->mutex_id) * args->num_of_p);
	args->thread_id = ft_zalloc(sizeof(*args->thread_id) * args->num_of_p);
	if ((args->mutex_id == NULL) || (args->thread_id == NULL))
		return (-1);
	while (i < args->num_of_p)
	{
		if (pthread_mutex_init(&args->mutex_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	return (0);
}