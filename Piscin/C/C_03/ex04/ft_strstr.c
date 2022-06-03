/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:12:45 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/21 22:41:25 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	k;
	int	y;

	k = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[k] != '\0')
	{
		y = 0;
		while (str[k + y] == to_find[y] && str[k + y] != '\0' )
		{
			if (to_find[y + 1 ] == '\0')
				return (&str[k]);
			y++;
		}
		k++;
	}
	return (0);
}

//char *ft_strstr(char *str, char *to_find);

//int		main(void)
//{
//	char str[] = "012340123456789";
//	char to_find[] = "401";

//	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
//	printf("%s\n", ft_strstr(str, to_find));

//	return (0);
//}