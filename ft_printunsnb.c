/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:45:27 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/07 22:45:30 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsnb(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (i >= 10)
		len += ft_printunsnb(i / 10);
	len += ft_putchar((i % 10) + '0');
	return (len);
}
