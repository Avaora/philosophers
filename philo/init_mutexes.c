/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mutexes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:11 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:19:10 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_mutexes(t_args *args)
{
	int	i;

	i = 0;
	if (pthread_mutex_init(&args->stdout_mutex, NULL) != 0)
		return (-1);
	while (i < args->num_of_p)
	{
		if (pthread_mutex_init(&args->mutex_id[i], NULL) != 0)
			return (-1);
		i++;
	}
	return (0);
}
