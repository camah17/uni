/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 11:07:57 by wtaylor           #+#    #+#             */
/*   Updated: 2018/08/03 10:41:48 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdio.h>

int	compare_previous(int **a, int i)
{
	int	j;

	j = 0;
	while (i - ++j >= 0)
	{
		if (ft_1ardif(a[i], a[i - j], 4, 4) == 0)
			return (0);
	}
	return (1);
}

int	**arrange(int **a, int n, int l, int i)
{
	while (++i < n)
	{
		while (compare_previous(a, i) == 0)
			increment_tet(a[i], l);
		printf("\na[%i][3]: %i", i, a[i][3]);
		if (a[0][3] > l * l)
		{
			printf("\nI'm about to upsize.");
			upsize_all(a, l + 1, l, n);
			l++;
			zero_all(a, n, l);
		}
		if (a[i][3] > l * l)
		{
	//		printf("\na[%i][3]: %i", i, a[i][3]);
			i--;
			increment_tet(a[i], l);
			zero_all(a + i + 1, n - i - 1, l);
	//		printf("\na[1][3]: %i", a[1][3]);
	//		printf("\na[%i][3]: %i", i, a[i][3]);
			i--;
			printf("\nArrange n, l, i: %i %i %i", n, l, i);
			arrange(a, n, l, i);
		}
	}
	return (a);
}
