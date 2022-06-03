/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:52:14 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/18 18:40:22 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if ((str[k] < 32 || str[k] > 126))
			return (0);
		else
			k++;
	}	
	return (1);
}

/*int		main(void)
{
	char numeric[] = "12345789";
	char *p_num;
	p_num = numeric;

	char special[] = "asa";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("%s = %d\n", numeric,ft_str_is_printable(p_num));
	printf("%s = %d\n", special,ft_str_is_printable(p_spe));
	printf("Empty = %d\n-----\n",ft_str_is_printable(p_emp));

	return (0);
}*/