/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:38:53 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/14 15:58:47 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int argument)
{
	int count;

	count = 0;
	ft_putnbr_fd(argument, 1);
	while(argument > 0)
	{
		argument = argument/ 10;
		count++;
	}
	return (count);
}