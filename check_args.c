#include "philo.h"

void	check_args(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
			{
				x += skip_list(&argv[i][x], "0123456789");
				if (argv[i][x] != 0x0)
					set_exit();
			}
			else
				set_exit();
		}
		i++;
	}
}