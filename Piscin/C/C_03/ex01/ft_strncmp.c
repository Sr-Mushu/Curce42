/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:38:36 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/23 18:45:56 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

//#include <stdio.h>
//#include <string.h>

//int		ft_strncmp(char *s1, char *s2, unsigned int n);
//int		main()
//{
//	char s1[] = "Nada a ver";
//	char s2[] = "Teste de Comparacao";
//	char s3[] = "Teste";
//}
