/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFilled.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 17:36:21 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 19:39:16 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <math.h>
#include <limits.h>

int isFilled(unsigned int parkingRow)
{
	unsigned int pos;
	unsigned int cmp;

	if (parkingRow) {
		pos = (unsigned int)log2((double)parkingRow);
		cmp = ((UINT_MAX << pos) << 1);
		cmp = ~cmp;
		return (1 >> (parkingRow ^ cmp));
	}
	return (1);
}
