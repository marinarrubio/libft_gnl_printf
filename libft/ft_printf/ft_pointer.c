/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:16:48 by marubio-          #+#    #+#             */
/*   Updated: 2023/03/22 14:13:56 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long n)
{
	int	len;

	len = 0;
	len += ft_str("0x");
	if (n == 0)
	{
		len += ft_char('0');
		return (len);
	}
	len += ft_print_hex(n, 'p');
	return (len);
}
