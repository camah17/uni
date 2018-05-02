/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:28:37 by wtaylor           #+#    #+#             */
/*   Updated: 2018/04/28 15:31:14 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	void	*s;
	int		i;

	i = 0;
	s = &i;
	printf("%i\n", *((int *)s));
	bzero(s, 5);
	printf("%i\n", *((int *)s));
	ft_bzero(s, 5);
	printf("%i\n", *((int *)s));
}
