/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:03:07 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/11 12:59:43 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static size_t	ft_check_type(va_list args, char c, int fd)
{
	size_t	print_len;

	print_len = 0;
	if (c == 'c')
		print_len += ft_count_putchar_fd(va_arg(args, int), fd);
	else if (c == 's')
		print_len += ft_fprint_string_count(va_arg(args, char *), fd);
	else if (c == 'p')
		print_len += ft_fcount_putptr_fd(va_arg(args, unsigned long int), fd);
	else if (c == 'i' || c == 'd')
		print_len += ft_fprint_number_count(va_arg(args, int), fd);
	else if (c == 'u')
		print_len += ft_fprint_unsigned_count(va_arg(args, unsigned int), fd);
	else if (c == 'x' || c == 'X')
		print_len += ft_fcount_puthex_base_fd(va_arg(args,
					unsigned int), c, fd);
	else if (c == 'f')
		print_len += ft_fprint_float_count(va_arg(args, double), fd);
	else if (c == '%')
		print_len += ft_count_putchar_fd('%', fd);
	return (print_len);
}

int	ft_fprintf(int fd, const char *str, ...)
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
			print_len += ft_check_type(args, str[i + 1], fd);
			i++;
		}
		else
			print_len += ft_count_putchar_fd(str[i], fd);
	}
	va_end(args);
	return (print_len);
}
