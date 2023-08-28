#include "philo.h"

double	get_utime(void)
{
	struct timeval	tp;
	double			time;

	gettimeofday(&tp, NULL); 
	time = (tp.tv_sec * 1000) + (tp.tv_usec / 1000);
	return (time);
}