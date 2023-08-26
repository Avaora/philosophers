#include "philo.h"

int	main(int argc, char *argv[])
{
	t_args	args;

	if ((argc == 5) || (argc == 6))
	{
		if (check_args(argc, argv) == -1)
			return (1);
		if (init_t_args(argc, argv, &args) == -1)
			return (1);
		if (create_philos(&args) == -1)
			return (1);
		
	}
	return (0);
}