/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:17:13 by pjaguin           #+#    #+#             */
/*   Updated: 2025/01/29 15:11:00 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

size_t	ft_nbr_len(unsigned long nbr)
{
	size_t	i;

	i = 0;
	while (nbr / 10 > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i + 1);
}
