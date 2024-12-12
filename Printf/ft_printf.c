/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:47:03 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/06 02:47:03 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_conversion(char specifier, va_list args) {
    int count = 0;

    if (specifier == 'c')
        count += ft_putchar(va_arg(args, int));
    else if (specifier == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (specifier == 'd' || specifier == 'i')
        count += ft_putnbr(va_arg(args, int));
    else if (specifier == 'u')
        count += ft_putunsigned(va_arg(args, unsigned int));
    else if (specifier == 'x')
        count += ft_puthex(va_arg(args, unsigned int), 'x');
    else if (specifier == 'X')
        count += ft_puthex(va_arg(args, unsigned int), 'X');
    else if (specifier == 'p')
        count += ft_putptr(va_arg(args, void *));
    else if (specifier == '%')
        count += ft_putpercent();
    else
        count += ft_putchar(specifier); // For invalid specifiers, just print it.

    return count;
}


int ft_printf(const char *format, ...) 
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, format);
    while (format[i]) {
        if (format[i] == '%' && format[i + 1]) {
            count += ft_conversion(format[i + 1], args);
            i++; // Skip the specifier
        } else {
            count += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return count;
}

/*int main() 
{
    ft_printf("String: %s\n", "Hello, 1337!");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Integer: %d\n", 1337);
    ft_printf("Unsigned: %u\n", 1337);
    ft_printf("Hexadecimal (lowercase): %x\n", 1337);
    ft_printf("Hexadecimal (uppercase): %X\n", 1337);
    ft_printf("Pointer: %p\n", (void *)main);
    ft_printf("Percent sign: %%\n");
    return 0;
}*/