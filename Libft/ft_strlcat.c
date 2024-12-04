/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:57:56 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:57:56 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c;
	size_t	ld;
	size_t	ls;

	ls = ft_strlen(src);
	if (size == 0)
		return (ls);
	ld = ft_strlen(dest);
	if (ld >= size)
		return (ls + size);
	c = 0;
	while (src[c] != '\0' && c < size - ld - 1)
	{
		dest[ld + c] = src[c];
		c++;
	}
	dest[ld + c] = '\0';
	return (ls + ld);
}
/* int main(void)
{
    char dest[] = "Hello";
    const char src[] = " World!";
    size_t size = 10;
    size_t length;

    length = ft_strlcat(dest, src, size);

    printf("lengthing string: %s\n", dest);
    printf("Length of the string tried to create: %zu\n", length);

    return 0;
} */
