/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:29:43 by unmugviolet       #+#    #+#             */
/*   Updated: 2025/02/05 18:25:26 by pjaguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clean.h"

void	ft_free_array_str(char **array)
{
	int	i;

	i = -1;
	while (array[++i])
		free(array[i]);
	free(array[i]);
	free(array);
}
