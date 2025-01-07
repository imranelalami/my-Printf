/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:45:08 by iel-alam          #+#    #+#             */
/*   Updated: 2025/01/07 22:45:09 by iel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(const char *s);
int	ft_printhex(unsigned long adress, const char *base, char flag);
int	ft_printnb(int nb, char flag);
int	ft_putchar(char c);
int	ft_printunsnb(unsigned int i);
int	handle_string(const char *str);
int	handle_pointer(unsigned long address);
int	checker(char spec, va_list args, char flag);

#endif