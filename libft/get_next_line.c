/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:37:50 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/05 16:21:42 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*join_free(char *s1, char *s2)
{
	char				*res;
	int					i;
	int					j;
	int					len;

	i = 0;
	j = 0;
	len = (ft_strlen(s1)) + (ft_strlen(s2));
	if ((res = (char *)(malloc(sizeof(char) * (len + 1)))) == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	free(s1);
	return (res);
}

int						from_static(char **line, t_lion *lst)
{
	char				*n;
	char				*zap;

	if (!lst->s)
		return (0);
	if ((n = ft_strchr(lst->s, '\n')))
	{
		zap = ft_strsub(lst->s, 0, n - lst->s);
		*line = join_free(*line, zap);
		lst->s = ft_strdup(lst->s + (n - lst->s) + 1);
		return (1);
	}
	else
	{
		*line = join_free(*line, lst->s);
		free(lst->s);
		lst->s = NULL;
	}
	return (0);
}

static t_lion			*find_fd(t_lion **lst, int fd)
{
	t_lion	**buf;

	buf = lst;
	while (*buf)
	{
		if ((*buf)->fd == fd)
			return (*buf);
		buf = &(*buf)->next;
	}
	if (*buf == NULL)
	{
		*buf = malloc(sizeof(**buf));
		(*buf)->next = NULL;
		(*buf)->s = NULL;
		(*buf)->fd = fd;
	}
	return (*buf);
}

int						from_file(char **line, t_lion *lst)
{
	int					res;
	char				*n;
	char				*buf;
	char				*zap;

	buf = (char *)(malloc(sizeof(char) * (BUFF_SIZE + 1)));
	while ((res = read(lst->fd, buf, BUFF_SIZE)))
	{
		if (res == -1)
			return (-1);
		buf[res] = '\0';
		if ((n = ft_strchr(buf, '\n')))
		{
			zap = ft_strsub(buf, 0, n - buf);
			*line = join_free(*line, zap);
			lst->s = ft_strdup(buf + (n - buf) + 1);
			return (1);
		}
		else
			*line = join_free(*line, buf);
	}
	if (**line == '\0' && res == 0)
		return (0);
	return (1);
}

int						get_next_line(const int fd, char **line)
{
	static	t_lion		*lst;
	t_lion				*buf;
	int					res;

	res = 0;
	if (fd < 0 || !line)
		return (-1);
	if (*line)
		*line = NULL;
	*line = ft_strdup("");
	buf = find_fd(&lst, fd);
	res = from_static(line, buf);
	if (res == 1)
		return (1);
	res = 0;
	res = from_file(line, buf);
	return (res);
}
