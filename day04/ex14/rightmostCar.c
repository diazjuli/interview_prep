/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rightmostCar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:36:22 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 20:40:46 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int rightmostCar(unsigned int parkingRow)
{
	for (int i = 0; parkingRow; i++)
	{
		if (parkingRow & (1 << i))
			return (i);
	}
	return (-1);
}
