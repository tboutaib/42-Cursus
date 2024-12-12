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

// Main printf function
int     ft_printf(const char *format, ...);

// Handlers for specific format specifiers
int     handle_placeholder(char specifier, va_list args);

// Format specifier functions
int     ft_printchar(char c);
int     ft_printstr(char *str);
int     ft_printnum(int n);
int     ft_printunsigned(unsigned int n);
int     ft_printhex(unsigned int n, char format);
int     ft_printptr(void *ptr);
int     ft_printpercent(void);

#endif