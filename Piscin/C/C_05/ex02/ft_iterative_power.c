/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:26:01 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/25 13:01:53 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	k;
	int	tmp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	tmp = nb;
	k = 1;
	while (k < power)
	{
		nb *= tmp;
		k++;
	}
	return (nb);
}

//int		main(void)
//{
//	printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
//	printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
//	printf("-3 ^ 1 = %d (-3)\n", ft_iterative_power(-3, 1));
//	printf("-3 ^ 2 = %d (9)\n", ft_iterative_power(-3, 2));
//	printf("-3 ^ 3 = %d (-27)\n", ft_iterative_power(-3, 3));
//	printf(" 0 ^-1 = %d (0)\n", ft_iterative_power(0, -1));
//	printf(" 0 ^ 0 = %d (1)\n", ft_iterative_power(0, 0));
//	printf(" 0 ^ 2 = %d (0)\n", ft_iterative_power(0, 2));
//	printf(" 4 ^-1 = %d (0)\n", ft_iterative_power(4, -1));
//	printf(" 4 ^ 0 = %d (1)\n", ft_iterative_power(4, 0));
//	printf(" 4 ^ 1 = %d (4)\n", ft_iterative_power(4, 1));
//	printf(" 4 ^ 2 = %d (16)\n", ft_iterative_power(4, 2));
//	printf(" 4 ^ 3 = %d (64)\n", ft_iterative_power(4, 3));
//}
