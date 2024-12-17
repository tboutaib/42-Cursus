/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 02:08:52 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/14 02:08:52 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char )c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)str + i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) <= start + len)
		str = malloc(ft_strlen(s) - start + 1);
	else
		str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

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

