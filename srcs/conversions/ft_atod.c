/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:39:20 by pjaguin           #+#    #+#             */
/*   Updated: 2025/02/13 19:09:39 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

double	ft_atod(const char *str)
{
	long	int_part;
	double	fract_part;
	double	power;
	int		is_negative;

	int_part = 0;
	fract_part = 0;
	is_negative = 1;
	power = 1;
	while (ft_is_whitespace(*str))
		++str;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			is_negative *= -1;
	while (*str && (ft_isdigit(*str) && *str != '.'))
		int_part = (int_part * 10) + (*str++ - '0');
	if (*str == '.')
		++str;
	while (*str && ft_isdigit(*str))
	{
		power /= 10;
		fract_part += (*str++ - '0') * power;
	}
	return ((int_part + fract_part) * is_negative);
}
