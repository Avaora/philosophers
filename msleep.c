#include "philo.h"

void	msleep(int msec)
{
	long long	time;

	time = get_utime() + msec;
	while (get_utime() < time)
	{
		usleep(100);
	}
}