/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:25:25 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/21 16:29:37 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	w;
	int	j;

	j = 0;
	w = 0;
	while (dest[w])
		w++;
	while (src[j] != '\0')
	{
		dest[w] = src[j];
		w++;
		j++;
	}
	dest[w] = '\0';
	return (dest);
}

//#include <stdio.h>
//int		main(void)
//{
//	char dest[5] = "qwert";
//	char src[] = ", yuiop";

//	printf("-----\ndest = %s\nsrc = %s\n", dest, src);

//	printf("result = %s\n-----\n", ft_strcat(dest, src));

//	return (0);
//}