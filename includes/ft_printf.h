/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:49:30 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/13 19:17:06 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "bases.h"
# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_string_count(char *str, int fd);
int	ft_print_number_count(int n);
int	ft_print_unsigned_count(unsigned int n);
int	ft_count_putptr_fd(unsigned long int ptr, int fd);
int	ft_count_puthex_base_fd(unsigned int nbr, char type, int fd);
int	ft_print_float_count(double n);

#endif
