/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:25:12 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/22 16:52:31 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_formats(va_list args, char c)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (c == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (c == 'p')
		print_length += ft_printptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		print_length += ft_printunsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		print_length += ft_printhex(va_arg(args, int), c);
	else if (c == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		print_length;

	va_start(args, format);
	i = 0;
	print_length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			print_length += ft_formats(args, format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			print_length++;
		}
		i++;
	}
	va_end(args);
	return (print_length);
}
