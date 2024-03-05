/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 00:01:54 by lade-kon      #+#    #+#                 */
/*   Updated: 2024/03/05 20:58:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*new_line(char *line)
{
	int		i;
	char	*new_line;

	if (!line)
		return (NULL);
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n')
			break ;
		i++;
	}
	if (line[i] == '\0')
		return (line);
	else
		line[i + 1] = '\0';
	new_line = ft_gnl_strdup(line);
	return (free(line), new_line);
}

char	*static_line(char *stash)
{
	int		i;
	char	*new_stash;

	if (!stash)
		return (NULL);
	new_stash = NULL;
	i = 0;
	while (stash[i] != '\0')
	{
		if (stash[i] == '\n')
			break ;
		i++;
	}
	if (stash[i] != '\0' && stash[i + 1] != '\0')
		new_stash = ft_gnl_strdup(&stash[i + 1]);
	return (free(stash), new_stash);
}

char	*read_line(char *stash, int fd)
{
	char	*buffer;
	int		read_bytes;

	if (!stash)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	buffer[0] = '\0';
	while (!ft_gnl_strchr(stash, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free(buffer), free (stash), NULL);
		if (read_bytes == 0)
			break ;
		buffer[read_bytes] = '\0';
		stash = ft_gnl_strjoin(stash, buffer);
		if (!stash)
			return (free(buffer), NULL);
	}
	if (stash[0] == '\0')
		return (free(buffer), free(stash), NULL);
	return (free(buffer), stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stash)
			free(stash);
		stash = NULL;
		return (NULL);
	}
	if (!stash)
		stash = ft_gnl_strdup("");
	stash = read_line(stash, fd);
	line = ft_gnl_strdup(stash);
	line = new_line(line);
	stash = static_line(stash);
	return (line);
}
