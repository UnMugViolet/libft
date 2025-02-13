/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:13 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/13 20:46:50 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_float_count(double n)
{
	char	*nbr_str;
	int		len;

	nbr_str = ft_dtoa(n, 6);
	ft_count_putstr_fd(nbr_str, 1);
	len = ft_strlen(nbr_str);
	free(nbr_str);
	return (len);
}
