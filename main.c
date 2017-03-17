/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:48:24 by bchin             #+#    #+#             */
/*   Updated: 2017/03/16 19:07:17 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <fcntl.h>

int			main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else return (2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
	return (0);
}
