/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occupiedPlaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 18:25:16 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 19:39:51 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <math.h>

int occupiedPlaces(unsigned int parkingRow)
{
	unsigned int i;
	int count;

	count = 1;
	while (parkingRow)
	{
		count = count << 1;
		i = (unsigned int)log2((double)parkingRow);
		parkingRow = parkingRow ^ (1 << i);
	}
	return (log2((double)count));
}
