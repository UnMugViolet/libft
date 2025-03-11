/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fureimu <fureimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:13 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/11 12:52:27 by fureimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_fprint_string_count(char *str, int fd)
{
	if (!str)
		return (ft_count_putstr_fd("(null)", fd));
	return (ft_count_putstr_fd(str, fd));
}

int	ft_fprint_number_count(int n, int fd)
{
	char	*nbr_str;
	int		len;

	nbr_str = ft_itoa(n);
	ft_count_putstr_fd(nbr_str, fd);
	len = ft_strlen(nbr_str);
	free(nbr_str);
	return (len);
}

int	ft_fprint_unsigned_count(unsigned int n, int fd)
{
	char	*nbr_str;
	int		len;

	nbr_str = ft_uitoa(n);
	ft_count_putstr_fd(nbr_str, fd);
	len = ft_strlen(nbr_str);
	free(nbr_str);
	return (len);
}

int	ft_fcount_putptr_fd(unsigned long int ptr, int fd)
{
	size_t	len;
	char	*base;
	char	*str;

	base = "0123456789abcdef";
	if (!ptr)
		return (ft_count_putstr_fd("(nil)", fd));
	len = ft_count_putstr_fd("0x", fd);
	str = ft_ulitoa_base(ptr, base);
	len += ft_count_putstr_fd(str, fd);
	free(str);
	return (len);
}

int	ft_fcount_puthex_base_fd(unsigned int nbr, char type, int fd)
{
	size_t	len;
	char	*str;
	char	*base;
	int		base_modified;

	base_modified = 0;
	base = "0123456789abcdef";
	if (type == 'X')
	{
		base = ft_str_toupper(base);
		base_modified = 1;
	}
	str = ft_uitoa_base(nbr, base);
	len = ft_strlen(str);
	ft_putstr_fd (str, fd);
	free(str);
	if (base_modified)
		free(base);
	return (len);
}
