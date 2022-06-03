/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:21:33 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/10 12:20:50 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	y;
	int	k;

	size--;
	y = 0;
	k = 1;
	while (y <= size)
	{
		while (k <= size)
		{
			if (tab[y] > tab[k])
			{
				ft_swap(&tab[y], &tab[k]);
			}
			k++;
		}
		k = y + 1;
		y++;
	}
}
