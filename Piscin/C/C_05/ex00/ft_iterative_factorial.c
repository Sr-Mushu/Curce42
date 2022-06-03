/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:43:48 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/25 12:59:36 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	n;

	if (nb < 0)
		return (0);
	n = 1;
	k = 1;
	while (k <= nb)
	{
		n = n * k;
		k++;
	}
	return (n);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
//	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
//	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
//	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
//	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
//	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
//}
