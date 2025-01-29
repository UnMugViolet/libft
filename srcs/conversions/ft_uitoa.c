/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:14:48 by pjaguin           #+#    #+#             */
/*   Updated: 2025/01/29 15:11:14 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

static char	*ft_fill_string(char *str, unsigned long nbr)
{
	size_t	i;

	i = 0;
	while (nbr >= 10)
	{
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[i++] = (nbr % 10) + '0';
	str[i] = 0;
	return (str);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned long	nbr;
	char			*str;

	nbr = n;
	str = (char *)malloc(sizeof(char) * ft_nbr_len(nbr) + 1);
	if (!str)
		return (NULL);
	return (ft_reverse(ft_fill_string(str, nbr)));
}
