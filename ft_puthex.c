/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:02:43 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:45 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nb, char *base, int *counter)
{
	if (nb >= 16)
		ft_puthex(nb / 16, base, counter);
	ft_putchar(base[nb % 16], counter);
}
