/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadicimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:29:13 by bchafi            #+#    #+#             */
/*   Updated: 2024/12/03 00:29:14 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadicimal(unsigned int num, char buffer)
{
    char *base;
    char hex;
    int count = 0;
    
    if(buffer == 'x')
        base = "0123456789abcdef";
    else if (buffer == 'X')
        base = "0123456789ABCDEF";
    if (num == 0)
        return (ft_putchr('0'), 1);
    if (num >= 16)
        count += ft_hexadicimal(num / 16, buffer);
    hex = base[num % 16];
    count += ft_putchr(hex);
    return (count);
}