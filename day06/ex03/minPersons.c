/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minPersons.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:37:00 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/17 17:17:15 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		minPersons(int elements, int minPercentage)
{
	double all_diff = 1.0;

	if (minPercentage > 100 || minPercentage <= 0 || elements <= 0)
		return (-1);
	if (minPercentage == 100)
		return (elements + 1);
	for (int i = 1; 1; i++)
	{
		if (1.0 - all_diff > minPercentage / 100.0)
			return (i);
		all_diff *= (double)(elements - i) / (double)elements;
	}
	return (-1);
}
