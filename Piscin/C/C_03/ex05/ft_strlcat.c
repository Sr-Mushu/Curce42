/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:22:09 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/23 14:28:54 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y])
		y++;
	return (y);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	y;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	k = ft_strlen(dest);
	y = 0;
	while (src[y] != '\0' && k + 1 < size)
	{
		dest[k] = src[y];
		k++;
		y++;
	}
	dest[k] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[y]));
}
//#include <stdio.h>
//#include <string.h>
//int				main()
//{
//	char			str0[10];
//	char			str1[10];
//	char			str2[] = "arrozarroz";
//	char			str3[] = "arrozarroz";
//	unsigned int	tamanho1;
//	unsigned int	tamanho2;

//	str0[0] = 'O';
//	str0[1] = 'l';
//	str0[2] = 'a';
//	str0[3] = 'e';
//	str0[4] = '\0';

//	str1[0] = 'O';
//	str1[1] = 'l';
//	str1[2] = 'a';
//	str1[3] = 'e';
//	str1[4] = '\0';

//	tamanho1 = ft_strlcat(str0, str2, 10);
//	tamanho2 = strlcat(str1, str3, 10);
//	printf("\nString final: %s,\n Tamanho: %d", str0, tamanho1);
//	printf("\nString final: %s,\n Tamanho: %d\n", str1, tamanho2);
//}