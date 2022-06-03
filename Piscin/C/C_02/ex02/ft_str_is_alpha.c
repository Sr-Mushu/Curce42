/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:39:27 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/17 18:28:04 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if ((str[k] <= '@') || (str[k] >= '['))
		{
			if ((str[k] <= '`') || (str[k] >= '{'))
				return (0);
			else
				k++;
		}
		else
			k++;
	}
	return (1);
}

/*int	main()
{
	char numeric[] = "12345A6789";
	char *p_num;
	p_num = numeric;

	char special[] = "QWERTYUIOPqwertyuiop";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("%s = %d\n", numeric,ft_str_is_alpha(p_num));
	printf("%s = %d\n", special,ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n",ft_str_is_alpha(p_emp));

	return (0);
}*/
