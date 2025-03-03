/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:37:18 by brdani            #+#    #+#             */
/*   Updated: 2024/10/28 03:17:44 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	execute_p_format(va_list args, int i)
{
	unsigned long long	nb;

	nb = va_arg(args, unsigned long long);
	if (nb == 0)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_putnbr_base(nb, "0123456789abcdef");
	return (i);
}

int	ft_print_format(va_list args, const char format)
{
	int	i;

	i = 0;
	if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 'p')
		i += execute_p_format(args, i);
	else if (format == 'u')
		i += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'X')
		i += ft_putnbr_base(va_arg(args, unsigned int), \
		"0123456789ABCDEF");
	else if (format == 'x')
		i += ft_putnbr_base(va_arg(args, unsigned int), \
		"0123456789abcdef");
	else if (format == '%')
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		print;
	va_list	args;

	va_start(args, format);
	i = 0;
	print = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			print += ft_print_format(args, format[i]);
		}
		else
		{
			ft_putchar(format[i]);
			print++;
		}
		i++;
	}
	va_end(args);
	return (print);
}
