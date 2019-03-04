/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearBits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:13:47 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 20:20:15 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int clearBits(unsigned int parkingRow, int n)
{
	for (int i = 0; i < n; i++) {
		parkingRow = parkingRow & ~(1 << i);
	}
	return (parkingRow);
}
