/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_everyone_fed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:17 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:23:17 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_everyone_fed(t_args *args)
{
	int	i;

	i = 0;
	if (args->num_of_e != -2)
	{
		while (i < args->num_of_p)
		{
			pthread_mutex_lock(&args->philo[i]->eat_mutex);
			if (args->philo[i]->eat_c == args->num_of_e)
			{
				args->fed_count++;
				args->philo[i]->eat_c = -3;
			}
			pthread_mutex_unlock(&args->philo[i]->eat_mutex);
			if (args->fed_count == args->num_of_p)
			{
				kill_them_all(args);
				return (-1);
			}
			i++;
		}
	}
	return (0);
}
