/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:00:57 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/22 16:54:16 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	if (n == 0)
		return (i);
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fill_str(char *str_num, long n, size_t digits)
{
	str_num[digits] = '\0';
	while (digits--)
	{
		str_num[digits] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	digits;
	char	*str_num;

	num = n;
	digits = get_digits(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		num = -num;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	fill_str(str_num, num, digits);
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
