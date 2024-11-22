/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:29:41 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/22 16:47:33 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printunsigned(int n)
{
	char	*nbr;
	int		len;

	len = 0;
	if (n >= 0)
	{
		nbr = ft_itoa(n);
		len = ft_strlen(nbr);
		write(1, nbr, len);
		free(nbr);
	}
	else
	{
		n = 4294967295 - n + 1;
		nbr = ft_itoa(n);
		len = ft_strlen(nbr);
		write(1, nbr, len);
		free(nbr);
	}
	return (len);
}
