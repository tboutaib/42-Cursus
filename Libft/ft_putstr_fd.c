/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:24:15 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/19 01:24:15 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/*int main()
{
    int fd;
    fd = open("txet.txt", O_RDWR | O_CREAT);
    printf("%d\n", fd);
    if (fd < 0)
    {
    		return(NULL);
    }
    close(fd);
 	ft_putstr_fd("Hello, world", fd);
     return (0);
}*/
