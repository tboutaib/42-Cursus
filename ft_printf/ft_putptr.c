/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:35:54 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/18 16:42:21 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexwahd(unsigned long num, char format)
{
	int		len;
	char	*hex_digits;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	hex_digits = "0123456789abcdef";
	if (num >= 16)
		len += ft_puthexwahd(num / 16, format);
	len += write(1, &hex_digits[num % 16], 1);
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	len = 0;
	len += write(1, "0x", 2);
	len += ft_puthexwahd(address, 'x');
	return (len);
}
