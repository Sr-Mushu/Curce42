/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:09:25 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/25 13:03:15 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	k;

	k = 1;
	while (k * k <= nb)
	{
		if (k * k == nb)
			return (k);
		if (k >= 46341)
			return (0);
		k++;
	}
	return (0);
}

//int	main(void)
//{
//	printf("-10 = %d (0)\n", ft_sqrt(-10));
//	printf("-1 = %d (0)\n", ft_sqrt(-1));
//	printf(" 0 = %d (0)\n", ft_sqrt(0));
//	printf(" 1 = %d (1)\n", ft_sqrt(1));
//	printf(" 2 = %d (0)\n", ft_sqrt(2));
//	printf(" 3 = %d (0)\n", ft_sqrt(3));
//	printf(" 4 = %d (2)\n", ft_sqrt(4));
//	printf(" 9 = %d (3)\n", ft_sqrt(9));
//	printf(" 16 = %d (4)\n", ft_sqrt(16));
//	printf(" 25 = %d (5)\n", ft_sqrt(25));
//}
