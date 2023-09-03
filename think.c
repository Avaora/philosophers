#include "philo.h"

int	think(t_philo *philo)
{
	if (msg(THINKING, philo) != 0)
		return (-1);
	usleep(100);
	return (0);
}