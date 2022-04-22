/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:40:15 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/15 17:16:40 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include <stdio.h>

int	is_parameter_value(const char string_01, va_list arguments);

int	ft_printf(const char *string_01, ...)
{
	int			count;
	int			count_return;
	va_list		arguments_list;

	count = 0;
	count_return = 0;
	va_start(arguments_list, string_01);
	while (string_01 && string_01[count])
	{
		if (string_01[count] == '%')
		{
			count++;
			count_return =+ is_parameter_value(string_01[count], arguments_list);

		}
		else
			count_return =+ write( 1, &string_01[count], 1);

	}
	va_end(arguments_list);
	return (count_return);
}

int	is_parameter_value(const char string_01, va_list arguments)
{
	if (string_01 == 'c')
		return (ft_print_c(va_arg(arguments, int)));
	if (string_01 == 'i')
		return (ft_print_i(va_arg(arguments, int)));
	if (string_01 == 'd')
		return (ft_print_d(va_arg(arguments, unsigned long int)));
	if (string_01 == 's')
		return (ft_print_s(va_arg(arguments, char *)));
	if (string_01 == 'u')
		return (ft_print_u(va_arg(arguments, unsigned int)));
	if (string_01 == 'x')
		return (ft_print_x(va_arg(arguments, unsigned int)));
	if (string_01 == 'X')
		return (ft_print_X(va_arg(arguments, unsigned int)));
	if (string_01 == '%')
		return (write(1,&arguments,1));
	if (string_01 == 'p')
		return (ft_print_p(va_arg(arguments, void *)));
	return (0);
}
