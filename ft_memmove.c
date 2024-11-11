/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:57:41 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:57:41 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include <stddef.h>

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d < s || d >= s + n)
    {
        while (n--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        d += n;
        s += n;
        while (n--)
        {
            *(--d) = *(--s);
        }
    }

    return dest;
}

/*int main() {
    char src1[] = "Hello, World!";
    char dest1[50];
    memmove(dest1, src1, strlen(src1) + 1);
    printf("Test 1 (Non-overlapping): %s\n", dest1);

    char buffer2[] = "Hello, World!";
    memmove(buffer2 + 6, buffer2, 5);
    printf("Test 2 (Overlap - forward): %s\n", buffer2);

    char buffer3[] = "Hello, World!";
    memmove(buffer3, buffer3 + 7, 6);
    printf("Test 3 (Overlap - backward): %s\n", buffer3);
    char buffer4[] = "Hello";
    memmove(buffer4 + 2, buffer4, 0);
    printf("Test 4 (Zero bytes): %s\n", buffer4);

    char src5[] = "Large data test for memmove function in C programming.";
    char dest5[100];
    memmove(dest5, src5, strlen(src5) + 1);
    printf("Test 5 (Large block): %s\n", dest5);

    return 0;
}*/