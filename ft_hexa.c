/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:13:51 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/09 21:12:49 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(int nbr)
{
	char	*base;
	int	count;

	count = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		nbr *= -1;
		count += ft_putchar('-');
	}
	if (nbr > 15)
	{
		count += ft_hexa(nbr / 16);
		count += ft_hexa(nbr % 16);
	}
	count += ft_putchar(base[nbr]);
	return (count);
}