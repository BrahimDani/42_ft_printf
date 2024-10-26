/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brdani <brdani@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 02:13:58 by brdani            #+#    #+#             */
/*   Updated: 2024/10/26 05:57:08 by brdani           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = 4;
	int *b = &a;
	ft_printf("Test ftprintfrafedaa: %p\n", b);
	printf("Test printf: %p\n", b);
	return (0);
}