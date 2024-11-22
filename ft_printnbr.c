/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:24:51 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/22 15:25:56 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_printnbr(int n)
{
	char	*nbr;
	int		len;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_strlen(nbr);
	write(1, nbr, len);
	free(nbr);
	return (len);
}
