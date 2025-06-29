/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:01:39 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/13 22:01:42 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *s, int *counter);
void	ft_put_unsigned(unsigned int nb, int *counter);
void	ft_puthex(unsigned long nb, char *base, int *counter);
void	ft_putnbr(int nb, int *counter);
void	ft_putptr(unsigned long nb, int *counter);

#endif