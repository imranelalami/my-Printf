/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:02:36 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:38 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *counter)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', counter);
		ft_putchar('2', counter);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-', counter);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, counter);
	}
	ft_putchar('0' + nb % 10, counter);
}
