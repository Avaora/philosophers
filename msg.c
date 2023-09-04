/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:30 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:45 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	msg(char *str, t_philo *philo)
{
	long long	time;

	if (is_finish(philo) != 0)
		return (-1);
	if (pthread_mutex_lock(&philo->args->stdout_mutex) != 0)
		return (-1);
	time = (get_utime() - philo->args->start_t);
	printf("%lld %d %s\n", time, philo->id, str);
	if (pthread_mutex_unlock(&philo->args->stdout_mutex) != 0)
		return (-1);
	return (0);
}
