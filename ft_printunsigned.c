/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:29:41 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/26 10:56:09 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_printunsigned(unsigned int n)
{
	char	*nbr;
	int		len;

	len = 0;
	if (n >= 0)
	{
		nbr = ft_uitoa(n);
		if (!nbr)
			return (0);
		len = ft_strlen(nbr);
		write(1, nbr, len);
		free(nbr);
	}
	return (len);
}
