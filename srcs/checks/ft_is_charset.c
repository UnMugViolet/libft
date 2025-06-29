/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:04:04 by fureimu           #+#    #+#             */
/*   Updated: 2025/06/17 12:02:51 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

/*
*	Checks wether a given char is part of the charset.
*	If no charset provided it returns false
*	@return(bool)
*/
bool	ft_is_charset(char c, char *charset)
{
	int	i;

	i = -1;
	if (!charset)
		return (false);
	while (charset[++i])
		if (charset[i] == c)
			return (true);
	return (false);
}
