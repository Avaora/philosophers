/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hold_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:09 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:19:57 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	hold_forks(t_philo *philo)
{
	if (first_fork(philo) != 0)
		return (-1);
	if (is_finish(philo) != 0)
	{
		release_first(philo);
		return (-1);
	}
	if (msg(PICKING, philo) != 0)
		return (-1);
	if (second_fork(philo) != 0)
		return (-1);
	if (is_finish(philo) != 0)
	{
		release_forks(philo);
		return (-1);
	}
	if (msg(PICKING, philo) != 0)
		return (-1);
	return (0);
}
