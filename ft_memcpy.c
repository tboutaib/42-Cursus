/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:57:36 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:57:36 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s =(const unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;    
    }

    return (dest);
}

/*int main() 
{
    char src1[] = "Hello, World!";
    char dest1[50];
    memcpy(dest1, src1, strlen(src1) + 1);  

    printf("Source 1: %s\n", src1);
    printf("Destination 1 after memcpy: %s\n", dest1);

    int src2[] = {1, 2, 3, 4, 5};
    int dest2[5];
    memcpy(dest2, src2, sizeof(src2));

    printf("Source 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", src2[i]);
    }
    printf("\nDestination 2 after memcpy: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dest2[i]);
    }
    printf("\n");

    return 0;
}*/