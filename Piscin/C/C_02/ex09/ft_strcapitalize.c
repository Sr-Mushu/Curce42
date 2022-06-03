/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:09:34 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/18 16:32:23 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if (k == 0)
			if (!((str[k] <= '`') || (str[k] >= '{')))
				str[k] = str[k] - 32;
		if ((str[k] <= '@') || (str[k] >= '['))
			if ((str[k] <= '`') || (str[k] >= '{'))
				if (!((str[k + 1] <= '`') || (str[k + 1] >= '{')))
					str[k + 1] = str[k + 1] - 32;
		k++;
	}
	return (str);
}

/*int		main(void)
{
	char lowercase[] = "abcdefghij klmnopq +rstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;
	char allcases[] = "oi, @tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char *p_all;
	p_all = allcases;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strcapitalize(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strcapitalize(p_all));
	printf("Empty = %s\n-----\n", ft_strcapitalize(p_emp));

}*/