/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:06:46 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/08 17:33:28 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print( char A, char B, char C)
{
	write (1, &A, 1 );
	write (1, &B, 1 );
	write (1, &C, 1 );
	if (!(A == '7' && B == '8' && C == '9'))
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	A;
	char	B;
	char	C;

	A = '0';
	B = '0';
	C = '0';
	while (A <= '7')
	{
		B = A + 1;
		while (B <= '8')
		{
			C = B + 1;
			while (C <= '9')
			{
				print(A, B, C);
				C++;
			}
			B++;
		}	
		A++;
	}
}
