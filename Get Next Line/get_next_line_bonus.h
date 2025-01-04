/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekakelw7ayle <fekakelw7ayle@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 02:41:53 by fekakelw7ay       #+#    #+#             */
/*   Updated: 2025/01/04 03:09:56 by fekakelw7ay      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif

char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *src);
char	*get_next_line(int fd);
int		ft_strlen(const char *str);

#endif