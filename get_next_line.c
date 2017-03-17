/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:45:52 by bchin             #+#    #+#             */
/*   Updated: 2017/03/16 18:46:30 by bchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list		*get_file(t_list **file, int fd)
{
	t_list		*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

static char		*add_char(char *str, char c)
{
	char	*new;
	int	len;
	int	i;

	len = ft_strlen(str) + 1;
	if (!(new = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		*(new + i) = *(str + i);
		i++;
	}
	*(new + i) = c;
	return (new);
}

static int		copy_to_new_line(char **dest, char *source)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (source[i++])
		if (source[i] == '\n')
			break ;
	j = i;
	if (!(*dest = ft_strnew(1)))
		return (0);
	while (source[k] && k < i)
	{
		if (!(*dest = add_char(*dest, source[k])))
			return (0);
		k++;
	}
	return (j);
}

int			get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static t_list	*file;
	t_list		*current;
	int		i;
	int		ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	current = get_file(&file, fd);
	if (!(*line = ft_strnew(1)))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (!(current->content = ft_strjoin(current->content, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(current->content))
		return (0);
	i = copy_to_new_line(line, current->content);
	i < (int)ft_strlen(current->content) ? current->content += (i + 1) : ft_strclr(current->content);
	return (1);
}
