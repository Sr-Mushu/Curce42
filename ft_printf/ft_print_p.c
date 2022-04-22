/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:38:45 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/11 13:09:21 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uli_base(unsigned long int n, char *base);
int	ft_printf_p(unsigned long int p)
{
	write(1, "0x", 2);
	return (ft_uli_base(p, "0123456789abcdef") + 2);
}
int	ft_uli_base(unsigned long int n, char *base)
{
	int	ret;

	ret = 0;
	if (n >= (unsigned long int)ft_strlen(base))
		ret += ft_uli_base(n / ft_strlen(base), base);
	ret += write(1, &base[n % ft_strlen(base)], 1);
	return (ret);
}