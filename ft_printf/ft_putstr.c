/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:04:45 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/18 16:03:01 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
