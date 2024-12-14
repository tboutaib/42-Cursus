/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:35:54 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/10 17:35:54 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void ft_putptr(void *ptr) 
{
    unsigned long address = (unsigned long)ptr;
    int len = 0;

    len += write(1, "0x", 2);
    len += ft_puthex(address, 'x');

    return len;
}