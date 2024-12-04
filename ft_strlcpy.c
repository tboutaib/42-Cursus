/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:58:03 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 08:58:03 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen((char *)src);
	if (dst && src && dstsize > 0)
	{
		i = 0;
		while (src[i] && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (slen);
}
/* int main(void)
{
    char src[] = "Hello world";
    char dest[20];

    size_t len;
	len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Dest: %s\n", dest);
    printf("len of src: %zu\n", len);

    return 0;
} */
