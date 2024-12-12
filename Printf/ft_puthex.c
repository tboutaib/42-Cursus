/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:36:13 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/10 17:36:13 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_puthex(unsigned int num, char format) 
{
    char *hex_digits;

    hex_digits = (format == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
    if (num >= 16)
        ft_puthex(num / 16, format);
    write(1, &hex_digits[num % 16], 1);
}