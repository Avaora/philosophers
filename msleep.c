#include "philo.h"

int	msleep(int msec)
{
	if (usleep(msec * 1000) != 0)
		return (-1);
	return (0);
}