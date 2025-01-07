/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:45:22 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/07 22:45:24 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_printnb(int nb, char flag)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	else if (flag == '+' || flag == ' ')
		len += ft_putchar(flag);
	if (nb >= 10)
		len += ft_printnb(nb / 10, 0);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}
