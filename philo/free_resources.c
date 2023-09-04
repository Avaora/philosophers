/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_resources.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:58 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:10 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	free_resources(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		if (pthread_join(args->thread_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	if (destroy_mutexes(args) != 0)
		return (-1);
	i = 0;
	while (i < args->num_of_p)
	{
		free(args->philo[i]);
		i++;
	}
	free(args->mutex_id);
	free(args->thread_id);
	free(args->philo);
	return (0);
}
