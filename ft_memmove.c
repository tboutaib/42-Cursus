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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ps;
	unsigned char		*pd;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	ps = (const unsigned char *)src;
	pd = (unsigned char *)dest;
	i = 0;
	if (ps > pd || pd >= ps + n)
	{
		while (n > i)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else
	{
		while (n-- > i)
			pd[n] = ps[n];
	}
	return ((void *)pd);
}

/* int main()
{
    char str[] = "Hello 1337";

    printf("Before ft_memmove:\n");
    printf("str: %s\n", str);

    ft_memmove(str + 5, str, 4);

    printf("After ft_memmove:\n");
    printf("str: %s\n", str);

    return 0;
} */
