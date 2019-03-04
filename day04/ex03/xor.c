/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xor.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 23:31:42 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/14 23:35:52 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

int		toInt(char *bits)
{
	int	result;
	int i;

	i = 0;
	result = 0;
	while (i < 6)
	{

		result = 2 * result + bits[i] - '0';
		i++;
	}
	return (result);
}

char *getXor(char *a, char *b)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 7);
	for (int i = 0; i < 9; i++)
	{
		result[i] = a[i] != b[i] ? '1' : '0';
	}
	result[6] = '\0';
	return (result);
}
