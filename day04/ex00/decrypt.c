/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:10:55 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/14 21:29:56 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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

char	*getSum(char *a, char *b)
{
	int carry = 0;

	for (int i = 5; i >= 0; i--)
	{
		if (carry)
			a[i]++;
		carry = 0;
		if (b[i] == '1')
			a[i]++;
		if (a[i] > '1')
		{
			a[i] -= 2;
			carry = 1;
		}
	}
	return (a);
}
