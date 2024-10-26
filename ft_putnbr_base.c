/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:25:35 by brdani            #+#    #+#             */
/*   Updated: 2024/10/26 06:50:24 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nb, char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (nb >= (unsigned long long)len)
		i += ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
	i++;
	return (i);
}
