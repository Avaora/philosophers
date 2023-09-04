/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:34 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:29 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_args(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != 0x0)
		{
			if ((argv[i][x] > 0x2f) && (argv[i][x] < 0x3a))
			{
				x += skip_list(&argv[i][x], "0123456789");
				if (argv[i][x] != 0x0)
					return (-1);
			}
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
