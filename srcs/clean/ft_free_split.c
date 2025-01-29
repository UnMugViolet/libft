/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unmugviolet <unmugviolet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:29:43 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/01/29 15:10:31 by unmugviolet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clean.h"

void	ft_free_split(char **array)
{
	int	i;

	i = -1;
	while (array[++i])
		free(array[i]);
	free(array[i]);
	free(array);
}
