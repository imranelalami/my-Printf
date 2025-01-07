/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:45:18 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/07 22:45:19 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

int	ft_printhex(unsigned long address, const char *base, char flag)
{
	int	len;

	len = 0;
	if (!base || (base[10] != 'a' && base[10] != 'A'))
		return (0);
	if (address == 0)
		return (ft_putchar('0'));
	if (flag == '#' && address != 0)
	{
		len += ft_putchar('0');
		if (base[10] == 'a')
			len += ft_putchar('x');
		else
			len += ft_putchar('X');
	}
	if (address >= 16)
		len += ft_printhex(address / 16, base, 0);
	len += ft_putchar(base[address % 16]);
	return (len);
}
