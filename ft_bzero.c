/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:56:56 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:56:56 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stddef.h>

void bzero(void *s, size_t n)
{
        size_t i;

        i = 0;
        while (i < n)
        {
                ((unsigned char *)s) = '0';
                i++
        }
        return (s);
}
/*int main()
{
    char buffer[10];
    int i;

    for (i = 0; i < sizeof(buffer); i++)
    {
        buffer[i] = 'A';
    }

    bzero(buffer, sizeof(buffer));

    printf("Buffer after bzero:\n");
    for (i = 0; i < sizeof(buffer); i++)
    {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/