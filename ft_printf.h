/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:15:47 by eaubry            #+#    #+#             */
/*   Updated: 2022/12/09 21:12:21 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int ft_printf(const char *str, ...);

int ft_display(va_list parameterinfos, char c);

int	ft_hexa(int nbr);

int	ft_putnbr_unsigned(unsigned int nb);

int	ft_hexa_upper(unsigned long long nbr);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_putnbr(int nb);

#endif