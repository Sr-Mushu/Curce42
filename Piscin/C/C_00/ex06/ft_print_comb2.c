/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:15:16 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/16 19:53:36 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int A, int B)
{
	char	AX;
	char	BX;
	char	AY;
	char	BY;

	AX = A / 10 + '0';
	AY = A % 10 + '0';
	BX = B / 10 + '0';
	BY = B % 10 + '0';
	write (1, &AX, 1);
	write (1, &AY, 1);
	write (1, " ", 1);
	write (1, &BX, 1);
	write (1, &BY, 1);
	if (!(A == 98 && B == 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	A;
	int	B;

	A = 0;
	B = 0;
	while (A <= 98)
	{
		B = A + 1;
		while (B <= 99)
		{
			print (A, B);
			B++;
		}
		B = 0;
		A++;
	}
}
