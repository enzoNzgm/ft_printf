/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:23:05 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/26 11:13:02 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

static int	ft_printptr_len(unsigned long long ptr)
{
	int	len;

	if (ptr == 0)
		return (5);
	len = 0;
	while (ptr)
	{
		ptr /= 16;
		len++;
	}
	return (len + 2);
}

int	ft_printptr(unsigned long long ptr)
{
	char	*base;
	char	*str;
	int		len;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	base = "0123456789abcdef";
	len = ft_printptr_len(ptr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = 'x';
	str[len] = '\0';
	while (ptr)
	{
		str[--len] = base[ptr % 16];
		ptr /= 16;
	}
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
