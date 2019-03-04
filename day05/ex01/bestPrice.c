/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestPrice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:05:38 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 15:19:23 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double	bestPrice(int pizzaSize, double *prices)
{
	double max = prices[pizzaSize];
	double bestA;
	double bestB;

	if (pizzaSize == 1)
		return (max);
	for (int i = 1; pizzaSize - i >= i; i++) {
		bestA = bestPrice(pizzaSize - i, prices);
		bestB = bestPrice(i, prices);
		if (bestA + bestB > max)
			max = bestA + bestB;
	}
	return (max);
}
