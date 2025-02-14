/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:03:55 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/02/13 21:04:20 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths.h"

double	ft_round(double n)
{
	double	decimal;
	double	int_part;

	decimal = n - (int)n;
	int_part = n - decimal;
	if (decimal >= 0.5)
		return (int_part + 1);
	return (int_part);
}
