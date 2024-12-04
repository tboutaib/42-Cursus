/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 01:22:20 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/19 01:22:20 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_contword(const char *str, char c)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			cont++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (cont);
}

static size_t	ft_lenstr(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	**ft_freetable(char **c, size_t i)
{
	while (i--)
		free(c[i]);
	free(c);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**table;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	table = malloc(sizeof(char *) * (ft_contword(s, c) + 1));
	if (table == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		table[j] = ft_substr(s, i, ft_lenstr(s + i, c));
		if (table[j++] == NULL)
			return (ft_freetable(table, j));
		i += ft_lenstr(s + i, c);
	}
	table[j] = NULL;
	return (table);
}

/*int main()
{
    char **array =  ft_split("helll enif dicn ihdc i cid", ' ');
    int  i  =  0;
    while(array[i])
    {
        printf("%s\n",array[i++]);
    }
}*/
