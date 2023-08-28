#include "philo.h"

double	eat_it(t_philo *philo, double time)
{
	double	cur_time;

	cur_time = (get_utime() - time);
	printf("%f %d is eating", cur_time, philo->id);
	usleep(philo->args->eat_t);
	
	return ();
}