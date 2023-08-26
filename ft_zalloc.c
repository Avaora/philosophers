#include "philo.h"

void	*ft_zalloc(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i < size)
	{
		*(mem + i) = 0;
		i++;
	}
	return (mem);
}