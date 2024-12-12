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

void ft_puthex(unsigned long num, char format);

void ft_putptr(void *ptr) 
{
    unsigned long address = (unsigned long)ptr;

    write(1, "0x", 2);
    ft_puthex(address, 'x');
}