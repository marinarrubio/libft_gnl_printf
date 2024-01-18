/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:16:28 by marubio-          #+#    #+#             */
/*   Updated: 2023/03/22 14:01:48 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numb(int n)
{	
	char	un;
	int		len;

	len = 0;
	if (n >= 0)
	{
		un = (n % 10) + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_numb(n);
		len += write(1, &un, 1);
	}
	else
	{
		un = (n % 10) * -1 + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_numb(n);
		else
			len += write(1, "-", 1);
		len += write(1, &un, 1);
	}
	return (len);
}
