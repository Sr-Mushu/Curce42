/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:40:14 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/26 13:46:17 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	y;

	y = 0;
	while (str[y])
		y++;
	return (y);
}

char	*ft_strdup(char *src)
{
	int		k;
	char	*w;

	w = malloc(sizeof(char) * ft_strlen(src));
	if (w == NULL)
		return (0);
	k = 0;
	while (src[k] != '\0')
	{
		w[k] = src[k];
		k++;
	}
	w[k] = '\0';
	return (w);
}

//char *ft_strdup(char *src);

//int	main(void)
//{
//	char *test;
//	char *dup;

//	test = "okidoki";
//	printf("test = %s\n", test);
//	dup = ft_strdup(test);
//	printf("dup  = %s\n", dup);
//	free(dup);
//}