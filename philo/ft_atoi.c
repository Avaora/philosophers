/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:00 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:17:09 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(char *str)
{
	long long	sum;
	int			i;

	sum = 0;
	i = 0;
	i += skip_list(str, "0");
	if (str[i] == 0x0)
		return (0);
	if (ft_strlen(&str[i]) > 10)
		return (-1);
	while (str[i] != 0x0)
	{
		sum *= 10;
		sum = (sum + (str[i] - 0x30));
		i++;
	}
	if ((sum < INT_MIN) || (sum > INT_MAX))
		return (-1);
	return (sum);
}
