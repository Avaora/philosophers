/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zalloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalende <ikalende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:15:05 by ikalende          #+#    #+#             */
/*   Updated: 2023/09/04 16:19:20 by ikalende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_zalloc(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i < size)
	{
		*(mem + i) = 0;
		i++;
	}
	return (mem);
}
