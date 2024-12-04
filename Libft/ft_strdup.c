/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:01:31 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 09:01:31 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = sizeof(char) * (ft_strlen(s) + 1);
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, len);
	return (p);
}

/* int main()
{
    char *src = "Hello is there anyone...";
    char *dup;
    dup = ft_strdup(src);
    if (dup == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("org : %s\n", src);
    printf("dup : %s\n", dup);
    free(dup);
    return (0);
} */
