/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:01:41 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 09:01:41 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;

	i = ft_strlen(str);
	while (str[i] != (char)chr)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)str + i);
}

/* int main()
{
    printf("%s\n", ft_strrchr("Hello, World!", 'l'));
    return 0;
} */
