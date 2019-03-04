/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leftmostCar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 20:24:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 22:56:47 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "header.h"

int leftmostCar(unsigned int parkingRow) {
	return (parkingRow ? (int)log2((double)parkingRow) : -1);
}
