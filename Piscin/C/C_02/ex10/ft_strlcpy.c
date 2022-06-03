/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:28:39 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/18 18:38:04 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	y;

	y = 0;
	k = 0;
	while (src[y] != '\0')
	{
		y++;
	}
	if (size != 0)
	{
		while ((src[k] != '\0') && (k < size - 1))
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (y);
}
/*int		main(void)
{
	char src[6] = "Sde";
	char dest[] = "";
	char src2[6] = "Sde";
	char dest2[] = "";
	unsigned int n;

	n = 0;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

	
	
    n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	
	
	
	
	n = strlcpy(dest2, src2, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src2, dest2, n);
	
	return (0);
}*/
