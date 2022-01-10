/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:21:28 by osallak           #+#    #+#             */
/*   Updated: 2022/01/10 22:07:57 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char *format, ...);
int		ft_check_percent(char *format, int index, va_list ptr);
int		ft_print_decimal(int d);
int		ft_print_char(int c);
int		ft_print_string(char *s);
int		ft_print_pointer(unsigned long ptr);
int		ft_print_unsigned(unsigned int u);
int		ft_print_hexa_lower(unsigned int x);
int		ft_print_hexa_upper(unsigned int x);
int		ft_strlen(const char *s);
char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
int		ft_putchar(char c);
int		ft_bool(int	c);

#endif