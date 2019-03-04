/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 22:12:11 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/14 23:25:10 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

char	*rightShift(char *bin, int k)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 7);
	result[0] = bin[0];
	for (int i = k; i < 6; i++)
	{
		result[i] = bin[i - k];
	}
	for (int i = 1; i < k && i < 6; i++)
	{
		result[i] = result[0];
	}
	result[6] = '\0';
	return (result);
}

char	*leftShift(char *bin, int k)
{
	char *result;


	result = (char *)malloc(sizeof(char) * 7);
	for (int i = 0; i < 6 - k; i++)
	{
		result[i] = bin[i + k];
	}
	for (int i = 0; i < k && i < 6; i++)
	{
		result[5 - i] = '0';
	}
	result[6] = '\0';
	return (result);
}

char	*twosComp(char *bits)
{
	int carry;
	char *comp;

	comp = (char *)malloc(sizeof(char) * 7);
	for (int i = 0; i < 6; i++)
	{
		comp[i] = bits[i] == '1' ? '0' : '1';
	}
	carry = 1;
	for (int i = 5; i >= 0; i--)
	{
		comp[i] += carry;
		carry = 0;
		if (comp[i] > '1')
		{
			carry = 1;
			comp[i] = '0';
		}
	}
	comp[6] = '\0';
	return (comp);
}

int		toInt(char *bits)
{
	int	result;
	int mult;

	mult = 1;
	if (bits[0] == '1')
	{
		bits = twosComp(bits);
		mult = -1;
	}
	result = 0;
	for (int i = 0; i < 6; i++)
	{
		result = 2 * result + bits[i] - '0';
	}
	return (mult * result);
}
