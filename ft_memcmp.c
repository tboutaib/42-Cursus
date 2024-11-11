/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:02:11 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 09:02:11 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;

    const unsigned char *ss1 = (const unsigned char *)s1;
    const unsigned char *ss2 = (const unsigned char *)s2;

    while ((i < n ) && (ss1[i] == ss2[i]))
    {
        i++;
    }
    if (i == n)
    {
        return (0);
    }
    return (ss1[i] - ss2[i]);
}

/*int main() 
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    int result = memcmp(str1, str2, strlen(str1));

    printf("Test 1 (Identical strings): ");
    if (result == 0) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    char str3[] = "Hello, World!";
    char str4[] = "Hello, There!";
    result = memcmp(str3, str4, strlen(str3));

    printf("Test 2 (Different strings): ");
    if (result != 0) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    char str5[] = "abcdef";
    char str6[] = "abcxyz";
    result = memcmp(str5, str6, 3);

    printf("Test 3 (Partial comparison): ");
    if (result == 0) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    char str7[] = "abc";
    char str8[] = "abcdef";
    result = memcmp(str7, str8, strlen(str7));

    printf("Test 4 (Different lengths): ");
    if (result == 0) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}*/