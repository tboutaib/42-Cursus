/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:47:03 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/22 21:58:34 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char specifier, va_list args)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (specifier == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (specifier == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (specifier == '%')
		len += ft_putpercent();
	else
		return (-1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += ft_conversion(format[i + 1], args);
			i++;
		}
		else
		{
			len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
