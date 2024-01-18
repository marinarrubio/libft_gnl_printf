/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marubio- <marubio-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:27:58 by marubio-          #+#    #+#             */
/*   Updated: 2023/09/22 12:40:54 by marubio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *type, ...);
int		ft_str(char *s);
char	*ft_strchr_pf(const char *s, int c);
int		ft_char(char c);
int		ft_numb(int n);
int		ft_pointer(unsigned long long n);
int		ft_unsigned(unsigned long long n);
void	ft_hexa(unsigned long long n, char type);
int		ft_strlen_for_hexa(unsigned long long n);
int		ft_print_hex(unsigned long long n, const char type);

#endif
