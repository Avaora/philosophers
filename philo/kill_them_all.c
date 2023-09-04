/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:25 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:52 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	kill_them_all(t_args *args)
{
	int	i;

	i = 0;
	while (i < args->num_of_p)
	{
		pthread_mutex_lock(&args->philo[i]->die_mutex);
		args->philo[i]->am_i_dead = 1;
		pthread_mutex_unlock(&args->philo[i]->die_mutex);
		i++;
	}
}
