/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:38:33 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/02/13 21:04:06 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths.h"

double	ft_pow(int base, int power)
{
	double	result;

	result = 1;
	while (power--)
		result *= base;
	return (result);
}
