/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:52:56 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 18:48:19 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>

static void	put_ptr(int count, char *ret)
{
	if (count)
	{
		ret[count] = '\0';
		while (--count >= 0)
			write (1, (ret + count), 1);
	}
}

int	ft_print_pointer(unsigned long ptr)
{
	char			ret[50];
	unsigned long	reminder;
	int				count;
	int				len;

	reminder = 0;
	count = 0;
	write (1, "0x", 2);
	len = 2;
	if (!ptr)
		write(1, "0", 1);
	if (!ptr)
		len ++;
	while (ptr)
	{
		reminder = ptr % 16;
		if (reminder < 10)
			ret[count++] = reminder + 48;
		else
			ret[count++] = reminder + 87;
		ptr /= 16;
	}
	put_ptr(count, ret);
	len += count;
	return (len);
}
