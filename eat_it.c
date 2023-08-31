#include "philo.h"

int	eat_it(t_philo *philo)
{
	printf("%f %d is eating", (get_utime() - philo->args->start_t), philo->id);
	usleep(philo->args->eat_t);
	philo->last_eat_t = get_utime();
	philo->eat_c++;
}