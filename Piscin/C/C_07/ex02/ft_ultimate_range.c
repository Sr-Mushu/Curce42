/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:58:01 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/26 17:14:22 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	interval;
	int	*aux;

	if (min >= max)
		return (0);
	interval = max - min;
	aux = malloc((interval) * sizeof(int));
	if (aux == NULL)
		return (-1);
	*range = aux;
	i = 0;
	while (min + i < max)
	{
		aux[i] = min + i;
		i++;
	}
	return (interval);
}

//#include <stdio.h>
//int	ft_ultimate_range(int **range, int min, int max);
//int main()
//{
//	int **retorno = malloc(sizeof(int **));
//	int min = 10;
//	int max = 21;
//	printf("%d\n", ft_ultimate_range(retorno, min, max));
//}