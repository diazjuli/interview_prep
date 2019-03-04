/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:34:19 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/14 22:11:03 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

char	*getAnd(char *a, char *b)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 5);
	if (a[0] == '~')
		a = getNot(a);
	if (b[0] == '~')
		b = getNot(b);
	for (int i = 0; i < 4; i++)
	{
		result[i] = a[i] == '1' && b[i] == '1' ? '1' : '0';
	}
	result[4] = '\0';
	return (result);
}

char	*getOr(char *a, char *b)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 5);
	if (a[0] == '~')
		a = getNot(a);
	if (b[0] == '~')
		b = getNot(b);
	for (int i = 0; i < 4; i++)
	{
		result[i] = a[i] == '1' || b[i] == '1' ? '1' : '0';
	}
	result[4] = '\0';
	return (result);
}

char	*getNot(char *a)
{
	for (int i = 0; i < 4; i++)
	{
		a[i] = a[i + 1] == '1' ? '0' : '1';
	}
	a[4] = '\0';
	return (a);
}

int		toInt(char *bits)
{
	int	result;
	int i;

	i = 0;
	result = 0;
	while (i < 4)
	{

		result = 2 * result + bits[i] - '0';
		i++;
	}
	return (result);
}
