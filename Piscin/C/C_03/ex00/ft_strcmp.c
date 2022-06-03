/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:28:23 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/21 16:22:15 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k])
		k++;
	return (s1[k] - s2[k]);
}
//int	main()
//{
//	char s1[] = "a";
//	char s2[] = "A";

//	printf("s2 e s1 = %d",ft_strcmp(s1,s2));

//}
