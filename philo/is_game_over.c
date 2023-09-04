/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_game_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:22 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:56 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_game_over(t_args	*args)
{
	long long	time;
	int			i;

	i = 0;
	while (i < args->num_of_p)
	{
		pthread_mutex_lock(&args->philo[i]->eat_mutex);
		time = get_utime();
		if ((time - args->philo[i]->last_eat_t) > args->die_t)
		{
			pthread_mutex_unlock(&args->philo[i]->eat_mutex);
			if (is_finish(args->philo[i]) != 0)
				return (-1);
			kill_them_all(args);
			msleep(2);
			die_msg(args, i, time);
			return (-1);
		}
		pthread_mutex_unlock(&args->philo[i]->eat_mutex);
		i++;
	}
	return (0);
}
