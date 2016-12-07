/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 13:58:47 by pbourlet          #+#    #+#             */
/*   Updated: 2016/12/07 20:07:20 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_gnl	*ft_create(t_gnl *b, int fd, t_gnl **list)
{
	t_gnl	*l[2];
	t_gnl	*n;

	l[0] = b;
	l[1] = b;
	while (l[0])
	{
		*list = l[0];
		if (l[0]->fd == fd)
			return (b);
		l[1] = l[0];
		l[0] = l[0]->next;
	}
	if (!(n = malloc(sizeof(char*) + sizeof(int) + sizeof(t_gnl*)))
	|| !(n->str = ft_strnew(BUFF_SIZE)) || read(fd, n->str, BUFF_SIZE) == -1)
		return (NULL);
	n->fd = fd;
	n->eof = 0;
	n->next = NULL;
	*list = n;
	if (b != NULL)
		l[1]->next = n;
	else
		b = n;
	return (b);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*b = NULL;
	t_gnl			*l;
	char			*str[2];
	int				i;

	if (fd == -1 || !line || !(b = ft_create(b, fd, &l))
			|| !(str[0] = ft_strnew(BUFF_SIZE)))
		return (-1);
	while (!ft_strchr(l->str, '\n') && !l->eof)
	{
		if (read(fd, str[0], BUFF_SIZE) < BUFF_SIZE)
			l->eof = 1;
		str[1] = l->str;
		l->str = ft_strjoin(l->str, str[0]);
		ft_strdel(&str[1]);
		ft_strclr(str[0]);
	}
	free(str[0]);
	if (!(i = 0) && l->str[0] == '\0' && l->eof)
		return (0);
	while (l->str[i] && l->str[i] != '\n')
		i++;
	*line = ft_strsub(l->str, 0, i);
	ft_memmove(l->str, l->str + i + 1, ft_strlen(l->str) - (i > 0 ? 1 : 0));
	return (1);
}
