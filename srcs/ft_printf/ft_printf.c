/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:03:07 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/13 19:13:07 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_type(va_list args, char c)
{
	size_t	print_len;

	print_len = 0;
	if (c == 'c')
		print_len += ft_count_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		print_len += ft_print_string_count(va_arg(args, char *), 1);
	else if (c == 'p')
		print_len += ft_count_putptr_fd(va_arg(args, unsigned long int), 1);
	else if (c == 'i' || c == 'd')
		print_len += ft_print_number_count(va_arg(args, int));
	else if (c == 'u')
		print_len += ft_print_unsigned_count(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		print_len += ft_count_puthex_base_fd(va_arg(args, unsigned int), c, 1);
	else if (c == 'f')
		print_len += ft_print_float_count(va_arg(args, double));
	else if (c == '%')
		print_len += ft_count_putchar_fd('%', 1);
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	print_len;
	size_t	i;

	va_start (args, str);
	i = -1;
	print_len = 0;
	if (!str)
		return (-1);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			print_len += ft_check_type(args, str[i + 1]);
			i++;
		}
		else
			print_len += ft_count_putchar_fd(str[i], 1);
	}
	va_end(args);
	return (print_len);
}
