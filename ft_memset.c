/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:57:47 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:57:47 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <stddef.h>

void *memset(void *s, int c, size_t n)
{
        int i;

        i = 0;
        while (i < n)
        {
                ((unsigned char *)s)[i] = c;
                i++;
        }
        return (s);
}
 
/*int main()
{
    char buffer[10];
    int i;

    memset(buffer, 'X', sizeof(buffer));

    printf("Buffer after memset:\n");
    for (i = 0; i < sizeof(buffer); i++)
    {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/