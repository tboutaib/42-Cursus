/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:21:59 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/19 01:21:59 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void function(unsigned int i, char *c)
{
    if (i % 2 == 0)
    {
        if (*c >= 'A' && *c <= 'Z')
            *c += 32;
    }
    else
    {
        if (*c >= 'a' && *c <= 'z')
            *c -= 32;
    }
}

int	main(void)
{
	char s[] = "AbCdF";
	ft_striteri(s, function);
	printf("%s\n", s);
	return (0);
}*/
