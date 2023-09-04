/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:50 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:12 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	skip_list(const char *str, char *lst)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != 0x0)
	{
		x = 0;
		while (lst[x] != 0x0)
		{
			if (str[i] == lst[x])
			{
				i++;
				break ;
			}
			x++;
		}
		if (lst[x] == 0x0)
			break ;
	}
	return (i);
}
