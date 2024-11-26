/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enzuguem <enzuguem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:20:33 by enzuguem          #+#    #+#             */
/*   Updated: 2024/11/26 11:34:37 by enzuguem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printptr(unsigned long long ptr);
int		ft_printhex(unsigned int num, const char format);
int		ft_printstr(char *str);
int		ft_printunsigned(unsigned int n);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

#endif
