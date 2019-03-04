/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updatePlace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 00:30:15 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 22:41:50 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int updatePlace(unsigned int parkingRow, int pos, int value)
{
	if (value != 0)
		parkingRow |= (1 << pos);
	else
		parkingRow &= ~(1 << pos);
	return (parkingRow);
}
