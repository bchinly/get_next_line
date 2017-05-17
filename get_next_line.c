/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:45:52 by bchin             #+#    #+#             */
/*   Updated: 2017/03/21 19:49:20 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_file(t_list **file, const int fd)
{
	t_list *tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	ft_lstadd(file, ft_lstnew(NULL, 0));
	(*file)->content_size = fd;
	(*file)->content = ft_strnew(0);
	return (*file);
}

void			copy_to_nl(char **line, char **current)
{
	char			*start;
	char			*end;

	start = ft_strdup(*current);
	end = ft_strchr(start, '\n');
	if (end != NULL)
	{
		*end++ = '\0';
		*line = ft_strdup(start);
		ft_strdel(current);
		*current = ft_strdup(end);
	}
	else
	{
		*line = ft_strdup(*current);
		ft_strclr(*current);
	}
	ft_strdel(&start);
}

void			copy_line(char *buf, int ret, char **current)
{
	char		*str;

	buf[ret] = '\0';
	str = ft_strjoin(*current, buf);
	ft_strdel(current);
	*current = ft_strdup(str);
	ft_strdel(&str);
}

int				get_next_line(const int fd, char **line)
{
	char			*buf;
	static t_list	*file;
	t_list			*current;
	int				ret;

	if (!(buf = (char*)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	current = get_file(&file, fd);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		copy_line(buf, ret, (char**)&current->content);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (!ft_strlen(current->content))
		return (0);
	copy_to_nl(line, (char**)&current->content);
	ft_strdel(&buf);
	return (1);
}
