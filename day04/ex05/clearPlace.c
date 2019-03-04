/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearPlace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 23:56:38 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 18:52:26 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

unsigned int clearPlace(unsigned int parkingRow, int pos)
{
	unsigned int tmp;

	tmp = 1 << pos;
	tmp =  parkingRow ^ tmp;
	return (parkingRow & tmp);
}
