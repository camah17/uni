/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:07:12 by wtaylor           #+#    #+#             */
/*   Updated: 2018/05/21 18:09:50 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	arr = (char **)malloc((ft_strlen(s)) * sizeof(arr));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i++] != c)
			arr[j][k++] = s[i];
		j++;
	}
	return (arr);
}