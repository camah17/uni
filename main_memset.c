/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 11:41:23 by wtaylor           #+#    #+#             */
/*   Updated: 2018/04/28 14:05:05 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	void	*b;
	int		i = 0;
	b = &i;

	printf("%d\n", (*(int*)memset(b, 3, 5)));
	printf("%d\n", (*(int*)ft_memset(b, 3, 5)));
	return (0);
}