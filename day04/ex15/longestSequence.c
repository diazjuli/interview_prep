/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longestSequence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:01:47 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 21:04:24 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int longestSequence(unsigned int parkingRow)
{
	int i = 0;

	while (parkingRow)
	{
		i++;
		parkingRow = parkingRow & (parkingRow << 1);
	}
	return (i);
}
