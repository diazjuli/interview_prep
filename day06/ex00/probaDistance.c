/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probaDistance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 12:54:11 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/17 13:23:51 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double probaDistance(int dist, int *locations, int n)
{
	int	sum = 0;
	int	num = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (locations[i] > locations[j])
			{
				sum += locations[i] - locations[j] > dist ? 1 : 0;
				num++;
			}
			if (locations[j] > locations[i])
			{
				sum += locations[j] - locations[i] > dist ? 1 : 0; 
				num++;
			}
		}
	}
	return ((double)sum / (double)num);
}
