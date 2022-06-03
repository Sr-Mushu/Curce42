/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:36:51 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/17 20:53:22 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if (((str[k] <= '`') || (str[k] >= '{')))
			return (0);
		else
			k++;
	}	
	return (1);
}

//int		main(void)
//{
//	char numeric[] = "123456789";
//	char *p_num;
//	p_num = numeric;

//	char special[] = "ASEFSERGT";
//	char *p_spe;
//	p_spe = special;

//	char empty[] = "";
//	char *p_emp;
//	p_emp = empty;

//	printf("%s = %d\n", numeric,ft_str_is_lowercase(p_num));
//	printf("%s = %d\n", special,ft_str_is_lowercase(p_spe));
//	printf("Empty = %d\n-----\n",ft_str_is_lowercase(p_emp));

//	return (0);
//}
