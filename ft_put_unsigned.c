/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:02:21 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/13 22:02:25 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned(unsigned int nb, int *counter)
{
	if (nb >= 10)
		ft_put_unsigned(nb / 10, counter);
	ft_putchar(nb % 10 + '0', counter);
}
