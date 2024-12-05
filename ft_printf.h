/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:09:36 by bchafi            #+#    #+#             */
/*   Updated: 2024/12/03 00:31:01 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putchr(int c);
int ft_putnbr(int n);
int ft_putstr(const char *str);
void ft_ayero(const char *format, int count, va_list args);
int ft_hexadicimal(unsigned int num, char buffer);

#endif