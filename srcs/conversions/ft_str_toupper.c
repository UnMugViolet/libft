/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:43:12 by pjaguin           #+#    #+#             */
/*   Updated: 2025/01/29 15:11:07 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

char	*ft_str_toupper(char *str)
{
	size_t	i;
	char	*ptr;

	i = -1;
	if (!str)
		return (NULL);
	ptr = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	while (str[++i])
		ptr[i] = ft_toupper(str[i]);
	ptr[i] = 0;
	return (ptr);
}
