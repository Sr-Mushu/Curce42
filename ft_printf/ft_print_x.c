/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:38:56 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/15 16:59:44 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int argument)
{
	char hexaDeciNum[100];
	int i = 0;
		while(argument!=0)
		{
			int itemp  = 0;
			itemp = argument % 16;
			if(itemp < 10)
			{ 
				hexaDeciNum[i] = itemp + 48;
				i++;
			} 
			else
			{
				hexaDeciNum[i] = itemp + 87;
				i++;
			}
				
			argument = argument/16;
		}
	i = ft_strlen(hexaDeciNum) - 2;
	while(i >= 0)
	{
		ft_putchar_fd(hexaDeciNum[i],1);
		i--;
	}
	return(ft_strlen(hexaDeciNum) - 1);
}
