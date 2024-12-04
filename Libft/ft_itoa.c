/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:22:42 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/19 01:22:42 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		j;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_intlen(n);
	j = n;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		n *= -1;
	str[i] = '\0';
	while (n > 0)
	{
		str[--i] = n % 10 + '0';
		n /= 10;
	}
	if (j < 0)
		*str = '-';
	return (str);
}
/*
int main()
{
	printf("%s\n", ft_itoa(-100));
	return (0);
}*/
