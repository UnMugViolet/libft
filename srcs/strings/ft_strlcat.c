/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:33:33 by pjaguin           #+#    #+#             */
/*   Updated: 2025/01/29 15:14:17 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utils.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	if (size < dest_len)
		return (src_len + size);
	if (size)
	{
		while (src[i] && (dest_len + i) < (size - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = 0;
	}
	return (dest_len + src_len);
}
