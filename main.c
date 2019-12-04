/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:12:07 by gbouwen       #+#    #+#                 */
/*   Updated: 2019/12/04 09:16:24 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	int		ret;
	char	*line;

	fd = open("tests/test_5_newlines.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	ret = 1;
	while (ret == 1)
	{
		ret = get_next_line(fd, &line);
		printf("line: %s\t ret: %d\n", line, ret);
		free(line);
	}
	return (0);
}

/*int	main(void)
{
	int		fd;
	int		i;
	int		ret;
	char	*line;

	fd = open("tests/TEST1.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	i = 0;
	ret = 1;
	while (i < 1)
	{
		ret = get_next_line(fd, &line);
		printf("line: %s\t ret: %d\n", line, ret);
		i++;
	}
	return (0);
}*/
