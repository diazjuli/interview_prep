/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carPosition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:04:56 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 20:05:57 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <math.h>
#include <limits.h>

int carPosition(unsigned int parkingRow)
{
	unsigned int pos;

	if (parkingRow) {
		pos = (unsigned int)log2((double)parkingRow);
		parkingRow = parkingRow ^ ((1 << pos));
		if (parkingRow)
			return (-1);
		return (pos);
	}
	return (-1);
}
