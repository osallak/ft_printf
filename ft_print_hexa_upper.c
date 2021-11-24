/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:47:12 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 19:58:14 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static void	put_hexa(int count, char *ret)
{
	ret[count] = '\0';
	if (count)
		while (--count >= 0)
			write (1, (ret + count), 1);
}

int	ft_print_hexa_upper(unsigned int x)
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
			ret[count++] = reminder + 55;
		x /= 16;
	}
	put_hexa(count, ret);
	len = count;
	return (len);
}
