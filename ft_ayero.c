/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ayero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:24:41 by bchafi            #+#    #+#             */
/*   Updated: 2024/12/04 15:32:52 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_ayero(const char *format, int count, va_list args)
{
    if (*format == 'd' || *format == 'i')
        count += ft_putnbr(va_arg(args, int));
    if (*format == 'c')
        count += ft_putchr(va_arg(args, int));
    else if (*format == 's')
        count += ft_putstr(va_arg(args, char *));
    else if (*format == 'x')
        count += ft_hexadicimal(va_arg(args, unsigned int), *format);
    else if (*format == 'X')
        count += ft_hexadicimal(va_arg(args, unsigned int), *format);
    else if (*format == 'u')
        count += ft_putchr('%');
    else if (*format == 'p')
        count += ft_putchr('%');
    else if (*format == '%')
        count += ft_putchr('%');
}
