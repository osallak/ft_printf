/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:19:13 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 19:42:33 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<unistd.h>

int	print(char *format, va_list ptr)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			len += ft_check_percent(format, index, ptr);
			index += 2;
			continue ;
		}
		write(1, (format + index), 1);
		len++;
		index++;
	}
	return (len);
}

int	ft_printf(char *format, ...)
{
	va_list	ptr;
	int		len;

	va_start(ptr, format);
	len = print(format, ptr);
	va_end(ptr);
	return (len);
}
