/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roulette.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:57:03 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/17 16:33:10 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double probabilityWin(double firstDollarsBet, double dollarsWanted, int nbGame)
{
	double prob = 0.0;

	if (firstDollarsBet >= dollarsWanted)
		return (1.0);
	if (nbGame == 0 || firstDollarsBet <= 0.0)
		return (0.0);
	prob += 18.0 / 37.0 * probabilityWin(firstDollarsBet * 2.0, dollarsWanted, nbGame - 1);
	prob += 1.0 / 37.0 * probabilityWin(firstDollarsBet / 2.0, dollarsWanted, nbGame - 1);
	return (prob);
}
