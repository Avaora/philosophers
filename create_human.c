#include "philo.h"

void	*create_human(void *arg)
{
	t_philo	*philo;
	t_args	*args;

	philo = arg;
	args = philo->args;
	printf("philo num: %d\n", philo->id);
	if ((philo->id % 2) == 0)
	{
		
	}
	return (NULL);
}