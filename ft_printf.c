/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:09:46 by bchafi            #+#    #+#             */
/*   Updated: 2024/12/05 13:36:56 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    if (write(1, 0, 0) < 0)
        return (-1);
    va_start(args, format);
    va_end(args);
    int count = 0;
    while (*format)
    {
        
        if (*format == '%')
        {
            format++;
            if (!*format) 
                break;
            if (*format)
                ft_ayero(format, count, args);
        }
        else
            count += ft_putchr(*format);
        format++;
    }
    return (count);
}

int main() {
    // close(1);
    ft_printf("%s %s", "bader", "hello");
    // printf("%");
    // ft_printf("You are %d years old.\n", 20);
    // printf("You are %d years old.\n", 20);
    // ft_printf("Edge case: %s\n", NULL);
    // ft_printf("Percent sign: %%\n");
    // // // ??? fix this slice
    // ft_printf("Invalid specifier: %q\n");
    // // printf("Invalid specifier: %q\n");
    // ft_printf("Large number: %%");
    // ft_printf("Large number: %%%%%%%d", 42);
    // printf("Large number: %%%%%%%d", 42);
    // ft_printf("Char: %c\n", 'A');
    // ft_printf("my Hexadecimal (lowercase): %x\n", 102);
    // printf("Hexadecimal (lowercase): %x\n", 102); 
    // ft_printf("my Hexadecimal (uppercase): %X\n", 255);  
    // printf("Hexadecimal (lowercase): %X\n", 255);   
    // ft_printf("Hexadecimal of zero: %x\n", 0);      
    // printf("Hexadecimal of zero: %x\n", 0); 
    // ft_printf("Hexadecimal (large number): %x\n", 4294967295U);
    // printf("Hexadecimal (large number): %x\n", 4294967295U);
    return 0;   
}