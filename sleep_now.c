#include "philo.h"

int	sleep_now(t_philo *philo, double time)
{
	double	cur_time;

	cur_time = (get_utime() - time);
	printf("%f %d is sleeping", cur_time, philo->id);
	usleep(philo->args->slp_t);
}