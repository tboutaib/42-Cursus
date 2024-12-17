/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 02:09:05 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/14 02:09:05 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

char    *get_next_line(int fd);
size_t  ft_strlen(const char *str);
char    *ft_strchr(const char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_strdup(const char *s);
char    *ft_substr(const char *s1, const char *s2);

#endif