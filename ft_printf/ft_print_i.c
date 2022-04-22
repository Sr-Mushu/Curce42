/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:38:47 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/15 17:13:21 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i(int argument)
{
	int count;

	count = 0;
	ft_putnbr_fd(argument, 1);
	if (argument < 0)
	{
		while(argument < 0)
		{
			argument = argument * 10;
			count++;
		}
		return (count);
	}
	if (argument > 0)
	{
		while(argument > 0)
		{
			argument = argument / 10;
			count++;
		}
		return (count);
	}
	return(0);
}
