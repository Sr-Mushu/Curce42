/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:32:14 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/21 16:40:23 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	w;
	unsigned int	j;

	j = 0;
	w = 0;
	while (dest[w])
		w++;
	while (src[j] && j < nb)
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
//	unsigned int n = 3;
//	char dest[5] = "qwert";
//	char src[] = ", yuiop";

//	printf("-----\ndest = %s\nsrc = %s\n", dest, src);

//	printf("result = %s\n-----\n", ft_strncat(dest, src , n));

//	return (0);
//}