/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:47:34 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/11 11:19:31 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	k;
	int	tmp;

	y = 0;
	k = size;
	while (y <= k)
	{
		tmp = tab[y];
		tab[y] = tab[k - 1];
		tab[k - 1] = tmp;
		y++;
		k--;
	}
}
