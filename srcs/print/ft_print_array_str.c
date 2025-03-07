/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:20:12 by pjaguin           #+#    #+#             */
/*   Updated: 2025/03/07 15:27:04 by pjaguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_print_array_str(char **array)
{
	int	i;

	i = -1;
	if (!array || !array[0])
		return ;
	while (array[++i])
		ft_putendl_fd(array[i], 1);
}
