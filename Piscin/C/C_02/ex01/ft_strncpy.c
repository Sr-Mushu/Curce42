/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:48:34 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/18 18:38:25 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	k;

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
/*int		main(void)
{
	char src[] = "qwer";
	char dest[] = "Defefd";
	unsigned int n;

	n = 3;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    //ft_strncpy(dest, src, n);
	//printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	
	strncpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}*/
