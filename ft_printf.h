/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:02:58 by brdani            #+#    #+#             */
/*   Updated: 2024/10/27 02:09:59 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int	ft_strlen(const char *str);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_print_format(va_list args, const char format);
int	ft_printf(const char *format, ...);
int	ft_putnbr_base(unsigned long long nb, char *base);
int	ft_print_unsigned(unsigned int nb);

#endif