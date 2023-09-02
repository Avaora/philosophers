#include "philo.h"

long long	get_utime(void)
{
	struct timeval	tp;
	long long		time;

	gettimeofday(&tp, NULL);
	time = ((tp.tv_sec * 1000)
		+ (tp.tv_usec / 1000));
	return (time);
}