#include "philo.h"

int	skip_list(const char *str, char *lst)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != 0x0)
	{
		x = 0;
		while (lst[x] != 0x0)
		{
			if (str[i] == lst[x])
			{
				i++;
				break ;
			}
			x++;
		}
		if (lst[x] == 0x0)
			break ;
	}
	return (i);
}