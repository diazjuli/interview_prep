/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotspots.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:25:37 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/17 15:50:06 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <limits.h>

int		get_max(struct s_hotspot **hotspots)
{
	int max = INT_MIN;

	for (int i = 0; hotspots[i]; i++)
		if (hotspots[i]->pos > max)
			max = hotspots[i]->pos;
	return (max);
}

int		selectHotspots(struct s_hotspot **hotspots)
{
	int	left = INT_MIN;
	int right = INT_MIN;
	int prev_right = INT_MIN;
	int num = 0;
	int max = get_max(hotspots);

	for (int i = 0; hotspots[i] && right < max; i++)
	{
		if (hotspots[i]->pos + hotspots[i]->radius > right)
		{
			if (hotspots[i]->pos - hotspots[i]->radius >= left &&
					hotspots[i]->pos - hotspots[i]->radius > prev_right)
			{
				num++;
				prev_right = right;
			}
			left = hotspots[i]->pos - hotspots[i]->radius;
			right = hotspots[i]->pos + hotspots[i]->radius;
		}
	}
	return (num);
}
