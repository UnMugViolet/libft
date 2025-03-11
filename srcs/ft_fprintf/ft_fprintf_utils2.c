/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:13 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/11 12:59:20 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_fprint_float_count(double n, int fd)
{
	char	*nbr_str;
	int		len;

	nbr_str = ft_dtoa(n, 6);
	ft_count_putstr_fd(nbr_str, fd);
	len = ft_strlen(nbr_str);
	free(nbr_str);
	return (len);
}

