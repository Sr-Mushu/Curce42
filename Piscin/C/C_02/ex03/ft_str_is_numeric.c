/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:23:28 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/17 18:28:36 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if (!((str[k] <= '/') || (str[k] >= ':')))
			k++;
		else
			return (0);
	}
	return (1);
}

/*int		main(void)
{
	char numeric[] = "123456789";
	char *p_num;
	p_num = numeric;

	char special[] = "qwertuiop";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("%s = %d\n", numeric,ft_str_is_numeric(p_num));
	printf("%s = %d\n", special,ft_str_is_numeric(p_spe));
	printf("Empty = %d\n-----\n",ft_str_is_numeric(p_emp));

	return (0);
}*/
