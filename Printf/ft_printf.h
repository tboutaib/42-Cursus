/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tboutaib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 06:40:55 by tboutaib          #+#    #+#             */
/*   Updated: 2024/12/07 06:40:55 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>


int     ft_printf(const char *format, ...);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_putunsigned(unsigned int n);
void    ft_puthex(unsigned int num, char format);
void    ft_putptr(void *ptr);
void    ft_putpercent(void);

#endif