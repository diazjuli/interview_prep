/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correctSong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:22:25 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 21:35:19 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void correctSong(struct s_bit *bit, int l, int row, int col, int dist)
{
	if (bit && l > 0 && row >= 0 && col >= 0 && dist > 0)
	{
		for (int i = row; i < row + dist && i < l; i++)
		{
			bit->arr[i] = bit->arr[i] | (1 << col);
		}
	}
}
