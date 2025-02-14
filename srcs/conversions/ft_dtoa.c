/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:19:38 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/02/13 21:04:56 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"
#include <math.h>

static void	ft_free_all(char *int_str, char *frac_str)
{
	free(int_str);
	free(frac_str);
}

static char	*get_int_part_str(double n)
{
	unsigned long	int_part;
	char			*int_str;
	int				is_negative;
	char			*neg_str;

	is_negative = n < 0;
	if (is_negative)
		n = -n;
	int_part = (unsigned long)n;
	int_str = ft_uitoa(int_part);
	if (is_negative)
	{
		neg_str = (char *)malloc(ft_strlen(int_str) + 2);
		if (!neg_str)
			return (NULL);
		neg_str[0] = '-';
		ft_strlcpy(neg_str + 1, int_str, ft_strlen(int_str) + 1);
		free(int_str);
		return (neg_str);
	}
	return (int_str);
}

static char	*get_fract_part_str(double n, int decimals)
{
	unsigned long	fract_part;
	char			*str;

	if (n < 0)
		n = -n;
	fract_part = (unsigned long)ft_round((n - (unsigned long)n) * ft_pow(10,
				decimals));
	str = ft_uitoa(fract_part);
	return (str);
}

char	*ft_dtoa(double n, int decimals)
{
	char	*int_str;
	char	*frac_str;
	char	*result;
	size_t	int_len;
	size_t	frac_len;

	int_str = get_int_part_str(n);
	frac_str = get_fract_part_str(n, decimals);
	int_len = ft_strlen(int_str);
	frac_len = ft_strlen(frac_str);
	if (!int_str || !frac_str)
		return (NULL);
	result = (char *)ft_calloc(int_len + frac_len + 2, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, int_str, int_len + 1);
	result[int_len] = '.';
	ft_strlcpy(result + int_len + 1, frac_str, frac_len + 1);
	ft_free_all(int_str, frac_str);
	return (result);
}
