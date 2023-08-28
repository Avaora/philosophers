#include "philo.h"

int	is_dead(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((get_utime() - philo->last_eat_t) >= args->die_t)
		return (-1);
	return (0);
}