/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:41:40 by osallak           #+#    #+#             */
/*   Updated: 2022/01/10 22:04:56 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_check_percent(char *format, int index, va_list ptr)
{
	int	len;

	len = 0;
	if (format[index + 1] == 'd' || format[index + 1] == 'i')
		len += ft_print_decimal(va_arg(ptr, int));
	else if (format[index + 1] == 's')
		len += ft_print_string(va_arg(ptr, char *));
	else if (format[index + 1] == 'c')
		len += ft_print_char(va_arg(ptr, int));
	else if (format[index + 1] == 'p')
		len += ft_print_pointer(va_arg(ptr, unsigned long));
	else if (format[index + 1] == 'u')
		len += ft_print_unsigned(va_arg(ptr, unsigned int));
	else if (format[index + 1] == 'x')
		len += ft_print_hexa_lower(va_arg(ptr, unsigned int));
	else if (format[index + 1] == 'X')
		len += ft_print_hexa_upper(va_arg(ptr, int));
	else if (format[index + 1] == 'b')
		len+= ft_bool(va_arg(ptr,int));
	else if (format[index + 1] == '%')
	{
		write (1, "%", 1);
		len += 1;
	}
	return (len);
}
