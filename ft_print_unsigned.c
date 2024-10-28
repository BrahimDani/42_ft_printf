/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:29:57 by brdani            #+#    #+#             */
/*   Updated: 2024/10/28 03:15:16 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int			i;
	long long	n;

	i = 0;
	n = nb;
	if (nb >= 10)
		i += ft_print_unsigned(nb / 10);
	i += ft_putchar((n % 10) + 48);
	return (i);
}
