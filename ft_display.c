/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:30:33 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/09 21:22:21 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display(va_list parameterinfos, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(parameterinfos, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 's')
		count += ft_putstr(va_arg(parameterinfos, void *));
	else if (c == 'd')
		count += ft_putnbr(va_arg(parameterinfos, int));
	else if (c == 'i')
		count += ft_putnbr(va_arg(parameterinfos, int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_hexa(va_arg(parameterinfos, int));
	}
	else if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(parameterinfos, unsigned int));
	else if (c == 'x')
		{
		count += ft_putstr("0x");
		count += ft_hexa(va_arg(parameterinfos, int));
		}
	else if (c == 'X')
		count += ft_hexa_upper(va_arg(parameterinfos, int));
	return (count);
}