#include "philo.h"

int	main(int argc, char *argv[])
{
	t_args	args;

	if (argc == 4)
	{
		check_args(argc, argv);
		init_t_args(argv, &args);
	}
	return (0);
}