/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:11:30 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/09 21:07:31 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned long long nbr)
{
	char	*base;
	int	count = 0;

	base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		nbr *= -1;
		count += ft_putchar('-');
	}
	if (nbr > 15)
	{
		count += ft_hexa_upper(nbr / 16);
		count += ft_hexa_upper(nbr % 16);
	}
	count += ft_putchar(base[nbr]);
	return (count);
}