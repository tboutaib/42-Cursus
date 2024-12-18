/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:36:13 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/18 16:35:20 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	int		len;
	char	*hex_digits;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (num >= 16)
		len += ft_puthex(num / 16, format);
	len += write(1, &hex_digits[num % 16], 1);
	return (len);
}
