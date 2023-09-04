/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_finish.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:20 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:59 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_finish(t_philo *philo)
{
	if (pthread_mutex_lock(&philo->die_mutex) != 0)
		return (-1);
	if (philo->am_i_dead == 1)
	{
		pthread_mutex_unlock(&philo->die_mutex);
		return (-1);
	}
	if (pthread_mutex_unlock(&philo->die_mutex) != 0)
		return (-1); 
	return (0);
}
