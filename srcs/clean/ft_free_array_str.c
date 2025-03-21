/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <yguinio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:29:43 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/03/19 15:57:34 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clean.h"

void	ft_free_array_str(char **array)
{
	int	i;

	i = -1;
	if (!array)
		return ;
	while (array[++i])
		free(array[i]);
	free(array[i]);
	free(array);
}
