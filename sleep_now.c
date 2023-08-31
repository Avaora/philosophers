#include "philo.h"

void	sleep_now(t_philo *philo)
{
	printf("%f %d is sleeping", (get_utime() - philo->args->start_t), philo->id);
	usleep(philo->args->slp_t);
}