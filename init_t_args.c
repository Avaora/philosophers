/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:14 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:19:06 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_t_args(int argc, char *argv[], t_args *args)
{
	int	i;

	i = 0;
	args->num_of_p = ft_atoi(argv[1]);
	args->die_t = ft_atoi(argv[2]);
	args->eat_t = ft_atoi(argv[3]);
	args->slp_t = ft_atoi(argv[4]);
	args->num_of_e = -2;
	args->fed_count = 0;
	if (argc == 6)
		args->num_of_e = ft_atoi(argv[5]);
	if (check_t_args(args) != 0)
		return (-1);
	args->philo = ft_zalloc(sizeof(*args->philo) * args->num_of_p);
	args->mutex_id = ft_zalloc(sizeof(*args->mutex_id) * args->num_of_p);
	args->thread_id = ft_zalloc(sizeof(*args->thread_id) * args->num_of_p);
	if ((args->mutex_id == NULL) || (args->thread_id == NULL)
		|| (args->philo == NULL))
		return (-1);
	if (init_mutexes(args) != 0)
		return (-1);
	return (0);
}
