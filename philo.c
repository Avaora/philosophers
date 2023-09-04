/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:36 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:25:55 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_args	args;

	if ((argc == 5) || (argc == 6))
	{
		if (check_args(argc, argv) == -1)
			return (1);
		if (init_t_args(argc, argv, &args) == -1)
			return (1);
		if (create_philos(&args) == -1)
			return (1);
		if (deploy_philos(&args) == -1)
			return (1);
		while (1)
		{
			if (is_everyone_fed(&args) != 0)
				break ;
			if (is_game_over(&args) != 0)
				break ;
		}
		if (free_resources(&args) == -1)
			return (1);
	}
	return (0);
}
