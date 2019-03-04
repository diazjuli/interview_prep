/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:27:31 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/16 20:22:22 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		get_permutations(char *str, char *result, int curr, int *used)
{
	if (!str[curr])
		return printf("%s\n", result);
	for (int i = 0; str[i]; i++) {
		if (used[i] == 0) {
			result[curr] = str[i];
			used[i] = 1;
			get_permutations(str, result, curr + 1, used);
			used[i] = 0;
		}
	}
	return (0);
}

void	printPermutations(char *str)
{
	int		len = strlen(str);
	int		*used = (int *)malloc(sizeof(int) * len);
	char	*result = (char *)malloc(sizeof(char) * len + 1);

	for (int i = 0; i < len; i++)
		used[i] = 0;
	result[len] = '\0';
	get_permutations(str, result, 0, used);
}
