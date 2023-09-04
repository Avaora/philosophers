/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:51 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:13 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	die_msg(t_args *args, int i, long long time)
{
	pthread_mutex_lock(&args->stdout_mutex);
	printf("%lld %d %s\n", time - args->start_t,
		args->philo[i]->id, DYING);
	pthread_mutex_unlock(&args->stdout_mutex);
}
