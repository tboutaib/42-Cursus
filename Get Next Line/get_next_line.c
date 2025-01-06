/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekakelw7ayle <fekakelw7ayle@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 02:08:57 by tboutaib          #+#    #+#             */
/*   Updated: 2025/01/06 13:05:46 by fekakelw7ay      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*free_and_return(char **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
	return (NULL);
}

static char	*ft_new_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == '\n')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

static char	*ft_read_line(int fd, char *buffer)
{
	char	*temp_buffer;
	ssize_t	bytes_read;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	temp_buffer = malloc((unsigned long)BUFFER_SIZE + 1);
	if (!temp_buffer)
		return (NULL);
	while (!buffer || !ft_new_line(buffer))
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free_and_return(&temp_buffer), free_and_return(&buffer),
				NULL);
		if (bytes_read == 0)
			break ;
		temp_buffer[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, temp_buffer);
		if (!buffer)
			return (free_and_return(&temp_buffer), NULL);
	}
	free(temp_buffer);
	return (buffer);
}

char	*gget_line(char **buffer, char *new)
{
	char	*temp;
	char	*new_buffer;

	temp = ft_strdup(*buffer);
	if (!temp)
		return (free_and_return(buffer));
	temp[new - *buffer + 1] = '\0';
	new_buffer = ft_strdup(new + 1);
	if (!new_buffer)
	{
		free(temp);
		return (free_and_return(buffer));
	}
	free(*buffer);
	*buffer = new_buffer;
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*buffer = NULL;
	char		*new_line_pos;
	char		*line;

	line = NULL;
	buffer = ft_read_line(fd, buffer);
	if (!buffer)
		return (NULL);
	new_line_pos = ft_new_line(buffer);
	if (new_line_pos)
	{
		line = gget_line(&buffer, new_line_pos);
	}
	else
	{
		line = ft_strdup(buffer);
		free_and_return(&buffer);
	}
	if (!line || line[0] == '\0')
		return (free_and_return(&line));
	return (line);
}
