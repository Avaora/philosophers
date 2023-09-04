/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deploy_philos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:42 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:15 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	deploy_philos(t_args *args)
{
	int	i;

	i = 0;
	args->start_t = get_utime();
	while (i < args->num_of_p)
	{
		args->philo[i]->last_eat_t = args->start_t;
		if (pthread_create(&args->thread_id[i], NULL,
				life_cycle, args->philo[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}
