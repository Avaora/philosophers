/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep_now.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:53 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:00 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	sleep_now(t_philo *philo)
{
	if (is_finish(philo) != 0)
		return (-1);
	if (msg(SLEEPING, philo) != 0)
		return (-1);
	msleep(philo->args->slp_t);
	if (is_finish(philo) != 0)
		return (-1);
	return (0);
}
