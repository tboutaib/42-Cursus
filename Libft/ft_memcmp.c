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

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1 = (const unsigned char *)s1;
	const unsigned char	*ss2 = (const unsigned char *)s2;

	i = 0;
	while ((i < n) && (ss1[i] == ss2[i]))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (ss1[i] - ss2[i]);
}

/* int main()
{
	printf("ft_memcmp result: %d\n", ft_memcmp("Hello", "Hella", 4));
    return 0;
} */
