#include "philo.h"

void	sleep_now(t_philo *philo)
{
	double	cur_time;

	cur_time = (get_utime() - philo->born_t);
	printf("%f %d is sleeping", cur_time, philo->id);
	usleep(philo->args->slp_t);
}