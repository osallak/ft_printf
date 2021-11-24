/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:32:42 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 19:57:08 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>

static void	put_hexa(int count, char *ret)
{
	ret[count] = '\0';
	if (count)
		while (--count >= 0)
			write (1, (ret + count), 1);
}

int	ft_print_hexa_lower(unsigned int x)
{
	char	ret[50];
	int		reminder;
	int		count;
	int		len;

	if (!x)
	{
		write (1, "0", 1);
		return (1);
	}
	reminder = 0;
	count = 0;
	while (x)
	{
		reminder = x % 16;
		if (reminder < 10)
			ret[count++] = reminder + 48;
		else
			ret[count++] = reminder + 87;
		x /= 16;
	}
	put_hexa(count, ret);
	len = count;
	return (len);
}
