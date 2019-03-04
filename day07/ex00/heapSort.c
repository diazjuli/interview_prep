/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heapSort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 22:22:12 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/18 00:39:22 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <string.h>
#include <stdio.h>
#define NAME(X) heap[X]->name 

void	swap(struct s_art **art ,int a, int b)
{
	struct s_art *tmp = art[a];

	art[a] = art[b];
	art[b] = tmp;
}

int		max_heapify(struct s_art **heap, int i, int n)
{
	int max = -1;
	int left = i * 2 + 1;
	int right = i * 2 + 2;

	if (left < n && right < n)
		max = strcmp(NAME(left), NAME(right)) >= 0 ? left : right;
	else if (left < n)
		max = left;
	else if (right < n)
		max = right;
	if (max == -1 || strcmp(NAME(i), NAME(max)) >= 0)
		return (1);
	else
	{
		swap(heap, max, i);
		return (0);
	}
}

void	build_max_heap(struct s_art **heap, int n)
{
	int done = 1;

	for (int i = (n - 1) / 2; i >= 0; i--)
	{
		done = max_heapify(heap, i, n);
		if (i == 0 && !done)
			i = (n - 1) / 2;
	}
}

void	sink(struct s_art **heap, int curr, int n)
{
	int left = curr * 2 + 1;
	int right = curr * 2 + 2;
	int max = -1;

	if (left < n && right < n)
		max = strcmp(NAME(left), NAME(right)) >= 0 ? left : right;
	else if (left < n)
		max = left;
	else if (right < n)
		max = right;
	if (max != -1 && strcmp(NAME(curr), NAME(max)) < 0)
	{
		swap(heap, max, curr);
		sink(heap, max, n);
	}
}

void	sort_heap(struct s_art **masterpiece, int n)
{
	if (n > 0)
	{
		swap(masterpiece, 0, n);
		sink(masterpiece, 0, n);
		n--;
		sort_heap(masterpiece, n);
	}
}

void heapSort(struct s_art **masterpiece, int n)
{
	build_max_heap(masterpiece, n);
	sort_heap(masterpiece, n - 1);
}
