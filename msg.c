#include "philo.h"

int	msg(char *str, t_philo *philo)
{
	long long	time;

	if (is_finish(philo) != 0)
		return (-1);
	if (pthread_mutex_lock(&philo->args->stdout_mutex) != 0)
		return (-1);
	time = (get_utime() - philo->args->start_t);
	printf("%lld %d %s\n", time, philo->id, str);
	if (pthread_mutex_unlock(&philo->args->stdout_mutex) != 0)
		return (-1);
	return (0);
}