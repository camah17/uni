/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtaylor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 10:08:51 by wtaylor           #+#    #+#             */
/*   Updated: 2018/08/12 13:18:15 by wtaylor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	get_next_line(const int fd, char **line)
{
	while (**line != '\n')
	{
		read(fd, *line, BUFF_SIZE);
		*line++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**line;
	int		fd;
	int		i;

	line = malloc(sizeof(char) * 1000);
	fd = open(argv[1], O_RDONLY);
	get_next_line(fd, line);
	i = 0;
	while (i < 10)
	{
		printf("%c", *line[i]);
		i++;
	}
	return (0);
}
