/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piano.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:04:52 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 21:21:28 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int **pianoDecompress(struct s_bit *bit, int l)
{
	int **result;
	int num;

	if (bit && bit->n > 0 && l > 0) {
		result = (int **)malloc(sizeof(int *) * bit->n);
		for (int row = 0; row < bit->n; row++)
		{
			result[row] = (int *)malloc(sizeof(int) * l);
			num = bit->arr[row];
			for (int col = 0; col < l; col++)
			{
				result[row][col] = num & (1 << col) ? 1 : 0;
			}
		}
		return (result);
	}
	return (NULL);
}
