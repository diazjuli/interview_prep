/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sinkIsland.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 15:07:50 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/16 15:50:58 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

void	sink(int **map, int row, int col) {
	if (row >= 0 && col >= 0 && map[row] && map[row][col] != -1) {
		if (map[row][col] == 1) {
			map[row][col] = 0;
			sink(map, row + 1, col);
			sink(map, row - 1, col);
			sink(map, row, col + 1);
			sink(map, row, col - 1);
		}
	}
}

int		length_array(int *row) {
	for (int i = 0; row[i] != -1; i++)
		if (row[i] == -1)
			return (i);
	return (0);
}

int		length_matrix(int **map) {
	for (int i = 0; map[i]; i++)
		if (!map[i])
			return (i);
	return (0);
}

void	sinkIsland(int **map, int row, int col) {
	if (map && row >= 0 && row < length_matrix(map) && col >= 0
			&& col < length_array(map[0]) && map[row][col] == 1) {
		sink(map, row, col);
	}
}
