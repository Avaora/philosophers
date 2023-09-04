/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   release_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:42 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:16:39 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	release_forks(t_philo *philo)
{
	if (release_first(philo) != 0)
		return (-1);
	if (release_second(philo) != 0)
		return (-1);
	return (0);
}
