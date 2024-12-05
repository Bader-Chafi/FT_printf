/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchafi <bchafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:15:56 by bchafi            #+#    #+#             */
/*   Updated: 2024/12/02 15:35:10 by bchafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(const char *str)
{
    int count = 0;

    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (*str)
    {
        count += ft_putchr(*str++);
    }
    return (count);
}