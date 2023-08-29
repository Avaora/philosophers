#include "philo.h"

int	eat_it(t_philo *philo)
{
	if (is_dead(philo) != 0)
		return (-1);
	printf("%f %d is eating", (get_utime() - philo->born_t), philo->id);
	usleep(philo->args->eat_t);
	philo->last_eat_t = get_utime();
	philo->eat_c++;
}