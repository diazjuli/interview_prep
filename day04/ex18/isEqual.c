/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isEqual.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:38:24 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/15 23:09:42 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int isEqual(int a, int b)
{
	return ((a & ~b) | (~a & b));
}
