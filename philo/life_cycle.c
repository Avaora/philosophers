/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life_cycle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:27 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:49 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*life_cycle(void *arg)
{
	t_philo	*philo;

	philo = arg;
	while (1)
	{
		if (hold_forks(philo) != 0)
			break ;
		if (eat_it(philo) != 0)
			break ;
		if (think(philo) != 0)
			break ;
	}
	return (NULL);
}
