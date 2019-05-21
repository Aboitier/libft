/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboitier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 21:58:11 by aboitier          #+#    #+#             */
/*   Updated: 2018/12/29 19:18:35 by aboitier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static	int		check_line(t_gnl *actual, int ret, char **line)
{
	char *tmp;

	if (ret == 0 && !ft_strlen(actual->str))
		return (0);
	if (!(*line = ft_strcdup(actual->str, '\n')))
		return (-1);
	if (ft_strclen(actual->str, '\n') < ft_strlen(actual->str))
	{
		tmp = ft_strdup((ft_strchr(actual->str, '\n') + 1));
		free(actual->str);
		actual->str = tmp;
	}
	else
		ft_strclr(actual->str);
	return (1);
}

static t_gnl	*check_fd(t_gnl **lst, int fd)
{
	t_gnl	*actual;
	t_gnl	*new;

	actual = *lst;
	while (actual)
	{
		if (actual->fd == fd)
			return (actual);
		actual = actual->next;
	}
	if (!(new = (t_gnl*)malloc(sizeof(t_gnl))))
		return (NULL);
	if (!(new->str = ft_strnew(1)))
	{
		free(new);
		return (NULL);
	}
	new->fd = fd;
	new->next = *lst;
	*lst = new;
	free(actual);
	return (new);
}

int				get_next_line(int fd, char **line)
{
	static t_gnl	*wrk_lst;
	t_gnl			*s_fd;
	char			buf[BUFF_SIZE + 1];
	char			*ptr;
	int				ret;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, buf, 0))
		return (-1);
	if (!(s_fd = check_fd(&wrk_lst, fd)))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ptr = s_fd->str;
		if (!(s_fd->str = ft_strjoin(s_fd->str, buf)))
			return (-1);
		free(ptr);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (check_line(s_fd, ret, line));
}
