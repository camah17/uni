/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 14:31:45 by wtaylor           #+#    #+#             */
/*   Updated: 2018/06/04 17:35:29 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*area;
	char	*ptr;

	area = malloc(size);
	if (area == NULL)
		return (NULL);
	ptr = (char *)area;
	while (size--)
		*ptr++ = 0;
	return (area);
}
