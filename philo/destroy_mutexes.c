/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_mutexes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:48 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:14 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	destroy_mutexes(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_mutex_destroy(&args->mutex_id[i]) != 0)
			return (-1);
		if (pthread_mutex_destroy(&args->philo[i]->eat_mutex) != 0)
			return (-1);
		if (pthread_mutex_destroy(&args->philo[i]->die_mutex) != 0)
			return (-1);
		i++;
	}
	if (pthread_mutex_destroy(&args->stdout_mutex) != 0)
		return (-1);
	return (0);
}
