#include "philo.h"

int	check_t_args(t_args *args)
{
	if ((args->num_of_p == 0)
		|| (args->num_of_p == -1))
		return (-1);
	if ((args->die_t == 0)
		|| (args->die_t == -1))
		return (-1);
	if ((args->eat_t == 0)
		|| (args->die_t == -1))
		return (-1);
	if ((args->slp_t == 0)
		|| (args->slp_t == -1))
		return (-1);
	if ((args->num_of_e == 0)
		|| (args->num_of_e == -1))
		return (-1);
	return (0);
}