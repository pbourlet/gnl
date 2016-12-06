/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 13:58:47 by pbourlet          #+#    #+#             */
/*   Updated: 2016/12/06 22:11:38 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_gnl	*ft_create(t_gnl *list, int fd)
{
	if (!(list = malloc(sizeof(char*) + sizeof(int) * 3 + sizeof(t_gnl*))))
		return (NULL);
	list->next = NULL;
	list->fd = fd;
	list->ret = 1;
	list->eof = 0;
	list->str = ft_strnew(0);
	return (list);
}

t_gnl	*ft_test(t_gnl *list, int *i)
{
	char	*buffer;
	char	*tmp;

	*i = 0;
	if (!(buffer = ft_strnew(BUFF_SIZE)) || !list->str)
		return (NULL);
	while (!ft_strchr(list->str, '\n') && !list->eof)
	{
		if ((list->ret = read(list->fd, buffer, BUFF_SIZE)) < BUFF_SIZE)
			list->eof = 1;
		if (list->ret == -1)
			return (NULL);
		tmp = list->str;
		list->str = ft_strjoin(tmp, buffer);
		free(tmp);
		ft_strclr(buffer);
	}
	free(buffer);
	tmp = list->str;
	while (tmp[*i] != '\n' && tmp[*i])
		*i += 1;
	return (list);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*list = NULL;
	int				i;
	char			*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (!list)
		list = ft_create(list, fd);
	list = ft_test(list, &i);
	if (!list)
		return (-1);
	if ((list->str[0] == '\0' && list->eof))
	{
		free(list);
		return (0);
	}
	*line = ft_strsub(list->str, 0, i);
	tmp = list->str;
	list->str = ft_strdup(tmp + i + 1);
	free(tmp);
	return (1);
}
