/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:10:45 by dagabrie          #+#    #+#             */
/*   Updated: 2021/08/24 12:34:36 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_swap(char *a, char *b)
{
	char	*c;

	*c = *a;
	*a = *b;
	*b = *c;
}

int	main(int ac, char **ag)
{
	int	u;
	int	k;
	int	y;
	int	h;

	ac -= 1;
	u = 1;
	while (u < ac)
	{
		k = 1;
		while (k < ac)
		{
			y = 0;
			while (ag[k][y] != '\0')
			{
				if (ag[u][y] != ag[k][y])
					if ((ag[u][y] - ag[k][y]) > 0)
						ft_swap(ag[u], ag[k]);
				y++;
			}
			k++;
		}
		ft_putstr(ag[u]);
		u++;
	}
}
