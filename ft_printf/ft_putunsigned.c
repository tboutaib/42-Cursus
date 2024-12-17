/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:54:05 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/13 15:54:05 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putunsigned(n / 10);
	}
	c = (n % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
