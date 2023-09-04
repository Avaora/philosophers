/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_fork.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:56 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:11 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	first_fork(t_philo *philo)
{
	t_args	*args;

	args = philo->args;
	if ((philo->id % 2) == 0)
	{
		if (pthread_mutex_lock(&args->mutex_id[philo->lf_id]) != 0)
			return (-1);
	}
	else
	{
		if (pthread_mutex_lock(&args->mutex_id[philo->rf_id]) != 0)
			return (-1);
	}
	return (0);
}
