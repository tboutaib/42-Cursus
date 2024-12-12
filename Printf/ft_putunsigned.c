/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:35:59 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/10 17:35:59 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_putunsigned(unsigned int n) {
    if (n >= 10)
        ft_putunsigned(n / 10);
    ft_putchar((n % 10) + '0');
}