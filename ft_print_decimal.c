/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:24:06 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 00:43:04 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_print_decimal(int n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	ft_print_string(str);
	len = ft_strlen(str);
	free (str);
	return (len);
}
