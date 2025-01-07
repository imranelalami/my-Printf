/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:45:37 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/07 22:45:39 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (ft_putstr("(null)"));
	while (*s)
		len += ft_putchar(*s++);
	return (len);
}
