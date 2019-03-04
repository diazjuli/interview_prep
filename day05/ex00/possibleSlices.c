/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibleSlices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 12:32:41 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/16 14:45:04 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

void	get_solution(struct s_array *arr) {
	struct s_array *copy;

	if (arr->sum == arr->capacity)
		arrayPrint(arr);
	for (int i = 1; arr->sum + i <= arr->capacity; i++) {
		copy = arrayClone(arr);
		arrayAppend(copy, i);
		get_solution(copy);
		free(copy->content);
		free(copy);
	}
}

void	printPossibleSlices(int pizzaSize) {
	struct s_array *arr = arrayInit();

	arr->capacity = pizzaSize;
	get_solution(arr);
}
