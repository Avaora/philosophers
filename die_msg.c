#include "philo.h"

void	die_msg(t_args *args, int i, long long time)
{
	pthread_mutex_lock(&args->stdout_mutex);
	printf("%lld %d %s\n", time - args->start_t,
		args->philo[i]->id, DYING);
	pthread_mutex_unlock(&args->stdout_mutex);
}