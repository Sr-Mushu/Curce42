/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:37:53 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/25 13:03:48 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	k;

	k = 2;
	if (nb < 2)
		return (0);
	while (k < nb)
	{
		if (nb % k == 0)
			return (0);
		k++;
	}
	return (1);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("-10 = %d (0)\n", ft_is_prime(-10));
//	printf("-1 = %d (0)\n", ft_is_prime(-1));
//	printf(" 0 = %d (0)\n", ft_is_prime(0));
//	printf(" 1 = %d (0)\n", ft_is_prime(1));
//	printf(" 2 = %d (1)\n", ft_is_prime(2));
//	printf(" 3 = %d (1)\n", ft_is_prime(3));
//	printf(" 4 = %d (0)\n", ft_is_prime(4));
//	printf(" 5 = %d (1)\n", ft_is_prime(5));
//	printf(" 6 = %d (0)\n", ft_is_prime(6));
//	printf(" 61 = %d (1)\n", ft_is_prime(61));
//	printf(" 8 = %d (0)\n", ft_is_prime(8));
//	printf(" 9 = %d (0)\n", ft_is_prime(9));
//	printf(" 10 = %d (0)\n", ft_is_prime(10));
//	printf(" 23 = %d (1)\n", ft_is_prime(23));
//}
