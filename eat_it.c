#include "philo.h"

double	eat_it(t_philo *philo)
{
	double	cur_time;

	cur_time = (get_utime() - philo->born_t);
	printf("%f %d is eating", cur_time, philo->id);
	usleep(philo->args->eat_t);
	philo->last_eat_t = get_utime();
	return ();
}