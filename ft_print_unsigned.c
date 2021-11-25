/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:31:11 by osallak           #+#    #+#             */
/*   Updated: 2021/11/24 22:57:36 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>

static int	count_digits(unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*ft_utoa(unsigned int n)
{
	int		count;
	char	*ptr;

	if (!n)
		return (ft_strdup("0"));
	count = count_digits(n);
	ptr = (char *) malloc((count + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[count] = 0;
	while (--count >= 0)
	{
		ptr[count] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

int	ft_print_unsigned(unsigned int u)
{
	int		len;
	char	*str;

	str = ft_utoa(u);
	len = ft_strlen(str);
	ft_print_string(str);
	free(str);
	return (len);
}
