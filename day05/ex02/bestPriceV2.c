/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestPriceV2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:25:57 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/16 15:06:27 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

double	getBestPrice(int size, double *bestPrices, double *prices) {
	double max = prices[size];

	if (size == 1)
		return (prices[size]);
	for (int i = 1; size - i >= i; i++) {
		if (bestPrices[i] < 0.0)
			bestPrices[i] = getBestPrice(i, bestPrices, prices);
		if (bestPrices[size - i] < 0.0)
			bestPrices[size - i] = getBestPrice(size - i, bestPrices, prices);
		if (max < bestPrices[i] + bestPrices[size - i])
			max = bestPrices[i] + bestPrices[size - i];
	}
	return (max);
}

double	optimizedBestPrice(int pizzaSize, double *prices) {
	double *bestPrices;

	bestPrices = (double *)malloc(sizeof(double) * pizzaSize + 1);
	for (int i = 0; i <= pizzaSize; i++)
		bestPrices[i] = -1.0;
	return (getBestPrice(pizzaSize, bestPrices, prices));
}
